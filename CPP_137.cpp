Here is the completed code:

```cpp
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : ((int)a == (int)b) ? boost::any("None") : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a > (float)b ? a : ((float)a == (float)b) ? boost::any("None") : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return (std::string)a > (std::string)b ? a : ((std::string)a == (std::string)b) ? boost::any("None") : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (float)b < (int)a ? a : ((int)a == (int)b) ? boost::any("None") : boost::any(std::to_string((double)b));
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        try {
            int b_int = stoi((std::string)b);
            return (int)a > b_int ? a : ((int)a == b_int) ? boost::any("None") : b;
        } catch (...) {
            return (std::string)a > (std::string)b ? a : ((std::string)a == (std::string)b) ? boost::any("None") : b;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        try {
            float b_float = stof((std::string)b);
            return (float)a > b_float ? a : ((float)a == b_float) ? boost::any("None") : b;
        } catch (...) {
            return (std::string)a > (std::string)b ? a : ((std::string)a == (std::string)b) ? boost::any("None") : b;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        try {
            int b_int = stoi((std::string)b);
            return (std::string)a > std::to_string(b_int) ? a : ((std::string)a == std::to_string(b_int)) ? boost::any("None") : boost::any(b);
        } catch (...) {
            return (std::string)a > (std::string)b ? a : ((std::string)a == (std::string)b) ? boost::any("None") : b;
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        try {
            float b_float = stof((std::string)b);
            return (std::string)a > std::to_string(b_float) ? a : ((std::string)a == std::to_string(b_float)) ? boost::any("None") : boost::any(b);
        } catch (...) {
            return (std::string)a > (std::string)b ? a : ((std::string)a == (std::string)b) ? boost::any("None") : b;
        }
    }
}