boost::any compare_one(boost::any a, boost::any b){
    if(a.type() == typeid(int) && b.type() == typeid(int)){
        if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
            return a;
        } else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
            return b;
        }
    } else if(a.type() == typeid(float) && b.type() == typeid(float)){
        if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
            return a;
        } else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
            return b;
        }
    } else if(a.type() == typeid(string) && b.type() == typeid(string)){
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        replace(str_a.begin(), str_a.end(), ',', '.');
        replace(str_b.begin(), str_b.end(), ',', '.');
        float float_a = stof(str_a);
        float float_b = stof(str_b);
        if(float_a > float_b){
            return a;
        } else if(float_a < float_b){
            return b;
        }
    }
    return "None";
}