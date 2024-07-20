Here is the completed code:

```cpp
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return a.convert_to<boost::any>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return a.convert_to<boost::any>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(long double)) {
        return a.convert_to<boost::any>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int bInt = stoi(b.convert_to<string>().get());
        return a.convert_to<int>() > bInt ? a : (a.convert_to<int>() < bInt ? b : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a.convert_to<float>() > static_cast<float>(b.convert_to<int>()) ? a : (a.convert_to<float>() < static_cast<float>(b.convert_to<int>()) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return a.convert_to<float>() > b.convert_to<double>() ? a : (a.convert_to<float>() < b.convert_to<double>() ? b : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(long double)) {
        return a.convert_to<float>() > b.convert_to<long double>() ? a : (a.convert_to<float>() < b.convert_to<long double>() ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        int bInt = stoi(b.convert_to<string>().get());
        return a.convert_to<string>().get().compare(0, a.convert_to<string>().get().size(), std::to_string(bInt).c_str()) > 0 ? a : (a.convert_to<string>().get().compare(0, a.convert_to<string>().get().size(), std::to_string(bInt).c_str()) < 0 ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float bFloat = stof(b.convert_to<string>().get());
        return a.convert_to<string>().get().compare(0, a.convert_to<string>().get().size(), std::to_string(bFloat).c_str()) > 0 ? a : (a.convert_to<string>().get().compare(0, a.convert_to<string>().get().size(), std::to_string(bFloat).c_str()) < 0 ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double bDouble = stod(b.convert_to<string>().get());
        return a.convert_to<string>().get().compare(0, a.convert_to<string>().get().size(), std::to_string(bDouble).c_str()) > 0 ? a : (a.convert_to<string>().get().compare(0, a.convert_to<string>().get().size(), std::to_string(bDouble).c_str()) < 0 ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(long double)) {
        long double bLong = stold(b.convert_to<string>().get());
        return a.convert_to<string>().get().compare(0, a.convert_to<string>().get().size(), std::to_string(bLong).c_str()) > 0 ? a : (a.convert_to<string>().get().compare(0, a.convert_to<string>().get().size(), std::to_string(bLong).c_str()) < 0 ? b : boost::any("None"));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a.convert_to<double>() > static_cast<double>(b.convert_to<int>()) ? a : (a.convert_to<double>() < static_cast<double>(b.convert_to<int>()) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(float)) {
        return a.convert_to<double>() > b.convert_to<float>() ? a : (a.convert_to<double>() < b.convert_to<float>() ? b : boost::any("None"));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return a.convert_to<double>() > b.convert_to<double>() ? a : (a.convert_to<double>() < b.convert_to<double>() ? b : boost::any("None"));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(long double)) {
        return a.convert_to<double>() > b.convert_to<long double>() ? a : (a.convert_to<double>() < b.convert_to<long double>() ? b : boost::any("None"));
    }
    else if (a.type() == typeid(long double) && b.type() == typeid(int)) {
        return a.convert_to<long double>() > static_cast<long double>(b.convert_to<int>()) ? a : (a.convert_to<long double>() < static_cast<long double>(b.convert_to<int>()) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(long double) && b.type() == typeid(float)) {
        return a.convert_to<long double>() > b.convert_to<float>() ? a : (a.convert_to<long double>() < b.convert_to<float>() ? b : boost::any("None"));
    }
    else if (a.type() == typeid(long double) && b.type() == typeid(double)) {
        return a.convert_to<long double>() > b.convert_to<double>() ? a : (a.convert_to<long double>() < b.convert_to<double>() ? b : boost::any("None"));
    }
    else {
        if ((a.convert_to<string>().get()).compare(0, (a.convert_to<string>().get()).size(), (b.convert_to<string>().get()).c_str()) > 0) {
            return a;
        }
        else if ((a.convert_to<string>().get()).compare(0, (a.convert_to<string>().get()).size(), (b.convert_to<string>().get()).c_str()) < 0) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
}