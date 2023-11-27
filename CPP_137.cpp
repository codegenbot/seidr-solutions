boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        return (intA > intB) ? intA : intB;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float floatA = boost::any_cast<float>(a);
        float floatB = boost::any_cast<float>(b);
        return (floatA > floatB) ? floatA : floatB;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string stringA = boost::any_cast<std::string>(a);
        std::string stringB = boost::any_cast<std::string>(b);
        float floatA, floatB;
        try {
            floatA = std::stof(stringA);
            floatB = std::stof(stringB);
        } catch (const std::invalid_argument&) {
            return std::string("None");
        }
        return (floatA > floatB) ? stringA : stringB;
    }
    return std::string("None");
}