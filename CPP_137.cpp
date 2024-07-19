if(a.index() == 0 && b.index() == 0){
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b)) return a;
    else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)) return b;
    else return "None";
}
else if(a.index() == 1 && b.index() == 1){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)) return a;
    else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)) return b;
    else return "None";
}
else if((a.index() == 0 && b.index() == 1) || (a.index() == 1 && b.index() == 0)){
    return "None";
}
else{
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);

    float num_a = stof(str_a);
    float num_b = stof(str_b);

    if(num_a > num_b) return a;
    else if(num_a < num_b) return b;
    else return "None";
}
}