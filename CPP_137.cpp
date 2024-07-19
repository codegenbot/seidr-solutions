if(a.type() == typeid(int) && b.type() == typeid(int)){
    int a_val = boost::any_cast<int>(a);
    int b_val = boost::any_cast<int>(b);
    return a_val > b_val ? a : (a_val < b_val ? b : "None");
} else if(a.type() == typeid(float) && b.type() == typeid(float)){
    float a_val = boost::any_cast<float>(a);
    float b_val = boost::any_cast<float>(b);
    return a_val > b_val ? a : (a_val < b_val ? b : "None");
} else if(a.type() == typeid(string) && b.type() == typeid(string)){
    string a_val = boost::any_cast<string>(a);
    string b_val = boost::any_cast<string>(b);
    float a_float = stof(a_val);
    float b_float = stof(b_val);
    return a_float > b_float ? a : (a_float < b_float ? b : "None");
} else if((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))){
    float a_float = stof(boost::any_cast<string>(a));
    float b_float = stof(boost::any_cast<string>(b));
    return a_float > b_float ? a : (a_float < b_float ? b : "None");
}