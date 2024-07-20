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
    double num_a = stod(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(','), 1, "."));
    double num_b = stod(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(','), 1, "."));
    if(num_a > num_b){
        return a;
    } else if(num_a < num_b){
        return b;
    } else {
        return "None";
    }
} else {
    return "Invalid input types.";
}