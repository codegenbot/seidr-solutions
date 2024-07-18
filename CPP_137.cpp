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
} else {
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    float num_a = stof(str_a.replace(str_a.find(","), 1, "."));
    float num_b = stof(str_b.replace(str_b.find(","), 1, "."));
    if(num_a > num_b){
        return a;
    } else if(num_a < num_b){
        return b;
    } else {
        return "None";
    }
}