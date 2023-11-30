boost::any compare_one(boost::any a,boost::any b){
    if (a.type() == typeid(int) && b.type() == typeid(int)){
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)){
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)){
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        str_a.erase(std::remove(str_a.begin(), str_a.end(), ','), str_a.end());
        str_b.erase(std::remove(str_b.begin(), str_b.end(), ','), str_b.end());
        if (stof(str_a) > stof(str_b)){
            return a;
        } else if (stof(str_a) < stof(str_b)){
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)){
        string str_b = boost::any_cast<string>(b);
        str_b.erase(std::remove(str_b.begin(), str_b.end(), ','), str_b.end());
        if (boost::any_cast<int>(a) > stof(str_b)){
            return a;
        } else if (boost::any_cast<int>(a) < stof(str_b)){
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)){
        string str_a = boost::any_cast<string>(a);
        str_a.erase(std::remove(str_a.begin(), str_a.end(), ','), str_a.end());
        if (stof(str_a) > boost::any_cast<int>(b)){
            return a;
        } else if (stof(str_a) < boost::any_cast<int>(b)){
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}