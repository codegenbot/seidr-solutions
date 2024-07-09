boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)boost::any_cast<int>(a) > (float)boost::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)boost::any_cast<float>(a) > (int)boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a) > (int)boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        int num = boost::any_cast<int>(b);
        return boost::any_cast<std::string>(a) > std::to_string(num) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        return (int)boost::any_cast<int>(a) > boost::any_cast<std::string>(b).compare(0, boost::any_cast<std::string>(b).length(), std::to_string((int)boost::any_cast<int>(a))) >= 0 ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return boost::any_cast<std::string>(a) > boost::any_cast<std::string>(b) ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return (float)boost::any_cast<float>(a) > boost::any_cast<double>(b) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        float num = boost::any_cast<float>(b);
        return boost::any_cast<std::string>(a) > std::to_string(num) ? a : b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        double num = boost::any_cast<double>(b);
        return boost::any_cast<std::string>(a) > std::to_string(num) ? a : b;
    }
    return "None";
}