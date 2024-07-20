Here is the completed code:

```cpp
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && (b.type() == typeid(float) || b.type() == typeid(std::string))) {
        int x = boost::any_cast<int>(a);
        float y;
        if (b.type() == typeid(float)) {
            y = boost::any_cast<float>(b);
        } else {
            std::string str = boost::any_cast<std::string>(b);
            size_t pos = str.find(',');
            if (pos != std::string::npos) {
                str.erase(pos, 1);
            }
            y = atof(str.c_str());
        }
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if ((a.type() == typeid(float) || a.type() == typeid(std::string)) && b.type() == typeid(int)) {
        float x;
        if (a.type() == typeid(float)) {
            x = boost::any_cast<float>(a);
        } else {
            std::string str = boost::any_cast<std::string>(a);
            size_t pos = str.find(',');
            if (pos != std::string::npos) {
                str.erase(pos, 1);
            }
            x = atof(str.c_str());
        }
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else if (a.type() == typeid(std::string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        std::string x = boost::any_cast<std::string>(a);
        int y;
        if (b.type() == typeid(int)) {
            y = boost::any_cast<int>(b);
        } else {
            float f = boost::any_cast<float>(b);
            size_t pos = std::to_string(f).find('.');
            if (pos != std::string::npos) {
                x += ".";
                for (int i = 0; i < pos; ++i) {
                    x += "0";
                }
            } else {
                size_t pos2 = x.find(',');
                if (pos2 != std::string::npos) {
                    x.erase(pos2, 1);
                }
            }
        }
        return (x > boost::any_cast<std::string>(b)) ? a : ((x < boost::any_cast<std::string>(b)) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && (b.type() == typeid(float) || b.type() == typeid(std::string))) {
        int x = boost::any_cast<int>(a);
        float y;
        if (b.type() == typeid(float)) {
            y = boost::any_cast<float>(b);
        } else {
            std::string str = boost::any_cast<std::string>(b);
            size_t pos = str.find(',');
            if (pos != std::string::npos) {
                str.erase(pos, 1);
            }
            y = atof(str.c_str());
        }
        return (x > y) ? a : ((x < y) ? b : boost::any("None"));
    } else {
        boost::any y = b;
        return (boost::any_cast<int>(a) > boost::any_cast<int>(y)) ? a : ((boost::any_cast<int>(a) < boost::any_cast<int>(y)) ? y : boost::any("None"));
    }
}