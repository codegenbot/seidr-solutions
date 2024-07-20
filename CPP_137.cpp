if(a.index() == 0 && b.index() == 0){
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b)) return a;
    if(boost::any_cast<int>(b) > boost::any_cast<int>(a)) return b;
} else if(a.index() == 1 && b.index() == 1){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)) return a;
    if(boost::any_cast<float>(b) > boost::any_cast<float>(a)) return b;
} else {
    string sa = boost::any_cast<string>(a);
    string sb = boost::any_cast<string>(b);
    sa.erase(std::remove(sa.begin(), sa.end(), ','), sa.end());
    sb.erase(std::remove(sb.begin(), sb.end(), ','), sb.end());
    if(stof(sa) > stof(sb)) return a;
    if(stof(sb) > stof(sa)) return b;
}
return "None";
}