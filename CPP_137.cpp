any compareOne(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((y > x) ? b : any(typeid(void)));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((y > x) ? b : any(typeid(void)));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string x = boost::any_cast<std::string>(a);
        int y = boost::any_cast<int>(b);
        return (std::stod(x) > y) ? a : ((y > std::stod(x)) ? b : any(typeid(void)));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float x = boost::any_cast<float>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((y > x) ? b : any(typeid(void)));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string x = boost::any_cast<std::string>(a);
        float y = boost::any_cast<float>(b);
        return (std::stod(x) > y) ? a : ((y > std::stod(x)) ? b : any(typeid(void)));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int x = boost::any_cast<int>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > std::stod(y)) ? a : ((std::stod(y) > x) ? b : any(typeid(void)));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float x = boost::any_cast<float>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > std::stod(y)) ? a : ((std::stod(y) > x) ? b : any(typeid(void)));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > y) ? a : ((y > x) ? b : any(typeid(void)));
    }
    else {
        return any(typeid(void));
    }
}