```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int num = boost::any_cast<int>(a);
        if(stoi(str)>num)
            return boost::any(b);
        else
            return "None";
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        float num = boost::any_cast<float>(a);
        if(stof(str)>num)
            return boost::any(b);
        else
            return "None";
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        double num = boost::any_cast<double>(a);
        if(stod(str)>num)
            return boost::any(b);
        else
            return "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int num = boost::any_cast<int>(b);
        if(stoi(str)>num)
            return boost::any(a);
        else
            return "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        float num = boost::any_cast<float>(b);
        if(stof(str)>num)
            return boost::any(a);
        else
            return "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = boost::any_cast<string>(a);
        double num = boost::any_cast<double>(b);
        if(stod(str)>num)
            return boost::any(a);
        else
            return "None";
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if(stod(str1)>stod(str2))
            return boost::any(a);
        else if(stod(str1)<stod(str2))
            return boost::any(b);
        else
            return "None";
    }
    else {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        }
        else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        }
        else
            return "None";
    }
}