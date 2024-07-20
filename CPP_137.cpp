if(a.index() == 0 && b.index() == 0){
    if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
        return b;
    } else if (boost::any_cast<int>(a) > boost::any_cast<int>(b)){
        return a;
    } else {
        return "None";
    }
} else if (a.index() == 1 && b.index() == 1){
    if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
        return b;
    } else if (boost::any_cast<float>(a) > boost::any_cast<float>(b)){
        return a;
    } else {
        return "None";
    }
} else {
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);
    if(stod(str_a) < stod(str_b)){
        return b;
    } else if (stod(str_a) > stod(str_b)){
        return a;
    } else {
        return "None";
    }
}