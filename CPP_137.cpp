boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) b > (int) a ? b : (return "None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float) a > (float) b ? a : (return "None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return strB > strA ? b : ((strA == strB) ? "None" : a);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int valB = boost::lexical_cast<int>(b);
        return (int) a > valB ? a : (return "None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a);
        int valA = boost::lexical_cast<int>(strA);
        return valA > (int) b ? a : (return "None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float valB = boost::lexical_cast<float>(b);
        return (float) a > valB ? a : (return "None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string strA = boost::any_cast<string>(a);
        float valA = boost::lexical_cast<float>(strA);
        return valA > (float) b ? a : (return "None");
    }
    else {
        return "None";
    }
}