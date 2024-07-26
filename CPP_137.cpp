if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return a;
        } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return b;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return a;
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return b;
        } else {
            return "None";
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        string val1 = boost::any_cast<string>(a);
        string val2 = boost::any_cast<string>(b);
        
        if(val1.find('.') != string::npos) {
            val1.erase(std::remove(val1.begin(), val1.end(), ','), val1.end());
            val1.replace(val1.find('.'), 1, ",");
        }
        
        if(val2.find('.') != string::npos) {
            val2.erase(std::remove(val2.begin(), val2.end(), ','), val2.end());
            val2.replace(val2.find('.'), 1, ",");
        }
        
        if(stod(val1) > stod(val2)){
            return a;
        } else if(stod(val1) < stod(val2)){
            return b;
        } else {
            return "None";
        }
    } else if((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))){
        return "None";
    }
}