boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(float) || a.type() == typeid(double)) {
        if (b.type() == typeid(float) || b.type() == typeid(double)) {
            float x = boost::any_cast<float>(a);
            float y = boost::any_cast<float>(b);
            return x > y ? a : b;
        } else if (b.type() == typeid(std::string)) {
            std::string strB = boost::any_cast<std::string>(b);
            float y = boost::lexical_cast<float>(strB);
            return x > y ? a : boost::any(b);
        }
    } else if (a.type() == typeid(int) || a.type() == typeid(long)) {
        if (b.type() == typeid(int) || b.type() == typeid(long)) {
            int x = boost::any_cast<int>(a);
            int y = boost::any_cast<int>(b);
            return x > y ? a : b;
        } else if (b.type() == typeid(std::string)) {
            std::string strB = boost::any_cast<std::string>(b);
            float y = boost::lexical_cast<float>(strB);
            return x > y ? a : boost::any(b);
        }
    } else if (a.type() == typeid(std::string)) {
        if (b.type() == typeid(int) || b.type() == typeid(long)) {
            int y = boost::any_cast<int>(b);
            std::string strA = boost::any_cast<std::string>(a);
            float x = boost::lexical_cast<float>(strA);
            return x > y ? a : boost::any(b);
        } else if (b.type() == typeid(std::string)) {
            std::string strB = boost::any_cast<std::string>(b);
            int comp = strcmp(strA.c_str(), strB.c_str());
            if (comp > 0) return a;
            else if (comp < 0) return b;
            else return boost::any("None");
        }
    }
    return "None";
}