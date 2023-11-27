boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        if (intA > intB) {
            return boost::any(intA);
        } else if (intA < intB) {
            return boost::any(intB);
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float floatA = boost::any_cast<float>(a);
        float floatB = boost::any_cast<float>(b);
        if (floatA > floatB) {
            return boost::any(floatA);
        } else if (floatA < floatB) {
            return boost::any(floatB);
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string stringA = boost::any_cast<std::string>(a);
        std::string stringB = boost::any_cast<std::string>(b);
        float floatA, floatB;
        try {
            floatA = boost::lexical_cast<float>(stringA);
            floatB = boost::lexical_cast<float>(stringB);
        } catch (const boost::bad_lexical_cast&) {
            return boost::any(std::string("None"));
        }
        if (floatA > floatB) {
            return boost::any(stringA);
        } else if (floatA < floatB) {
            return boost::any(stringB);
        }
    }
    return boost::any(std::string("None"));
}