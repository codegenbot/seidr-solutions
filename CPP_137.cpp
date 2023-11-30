boost::any compare_one(boost::any a, boost::any b){
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        if (intA > intB)
            return a;
        else if (intB > intA)
            return b;
    }
    
    if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float floatA = boost::any_cast<float>(a);
        float floatB = boost::any_cast<float>(b);
        if (floatA > floatB)
            return a;
        else if (floatB > floatA)
            return b;
    }
    
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string stringA = boost::any_cast<string>(a);
        string stringB = boost::any_cast<string>(b);
        if (stringA > stringB)
            return a;
        else if (stringB > stringA)
            return b;
    }
    
    return "None";
}