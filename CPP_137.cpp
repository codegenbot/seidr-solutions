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
    float num_a, num_b;
    if((a.type() == typeid(string)) && (b.type() == typeid(string))){
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        str_a.erase(std::remove(str_a.begin(), str_a.end(), ','), str_a.end());
        str_b.erase(std::remove(str_b.begin(), str_b.end(), ','), str_b.end());
        num_a = stof(str_a);
        num_b = stof(str_b);
    }
    if(num_a > num_b){
        return a;
    } else if(num_a < num_b){
        return b;
    } else {
        return "None";
    }
} else {
    return "None";
}