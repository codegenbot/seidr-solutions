if(a.type() == typeid(int) && b.type() == typeid(int)){
        int a_int = boost::any_cast<int>(a);
        int b_int = boost::any_cast<int>(b);
        if(a_int > b_int) return a_int;
        else if(a_int < b_int) return b_int;
        else return "None";
    }
    else if(a.type() == typeid(float) && b.type() == typeid(float)){
        float a_float = boost::any_cast<float>(a);
        float b_float = boost::any_cast<float>(b);
        if(a_float > b_float) return a_float;
        else if(a_float < b_float) return b_float;
        else return "None";
    }
    else if(a.type() == typeid(std::string) && b.type() == typeid(std::string)){
        std::string a_str = boost::any_cast<std::string>(a);
        std::string b_str = boost::any_cast<std::string>(b);
        double a_double = stod(a_str.replace(a_str.find(','), 1, "."));
        double b_double = stod(b_str.replace(b_str.find(','), 1, "."));
        if(a_double > b_double) return a_str;
        else if(a_double < b_double) return b_str;
        else return "None";
    }
    else if((a.type() == typeid(int) && b.type() == typeid(std::string)) ||
            (a.type() == typeid(std::string) && b.type() == typeid(int))){
        if(a == b) return "None";
        else if(a.type() == typeid(int)){
            return a;
        }
        else{
            return b;
        }
    }
}