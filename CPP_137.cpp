boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        return intA > intB ? intA : (intA < intB ? intB : "None");
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float floatA = boost::any_cast<float>(a);
        float floatB = boost::any_cast<float>(b);
        return floatA > floatB ? floatA : (floatA < floatB ? floatB : "None");
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string stringA = boost::any_cast<string>(a);
        string stringB = boost::any_cast<string>(b);
        return stringA > stringB ? stringA : (stringA < stringB ? stringB : "None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int intA = boost::any_cast<int>(a);
        string stringB = boost::any_cast<string>(b);
        return stringB;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string stringA = boost::any_cast<string>(a);
        int intB = boost::any_cast<int>(b);
        return stringA;
    } else {
        return "None";
    }
}