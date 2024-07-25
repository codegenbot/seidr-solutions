boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        
        int comp = strcmp(str1.c_str(), str2.c_str());
        if (comp > 0)
            return a;
        else if (comp < 0)
            return b;
        else
            return "None";
    }
    else {
        // If both values are equal, compare their types.
        if (a.type() == typeid(int) && b.type() == typeid(int))
            return "None";
        else
            return boost::any_cast<double>(a) > boost::any_cast<double>(b)
                ? a : b;
    }
}