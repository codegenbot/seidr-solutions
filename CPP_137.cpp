if(a.type() == typeid(int)){
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b)) return a;
    else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)) return b;
    else return "None";
}
else if(a.type() == typeid(float)){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)) return a;
    else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)) return b;
    else return "None";
}
else if(a.type() == typeid(string)){
    string sa = boost::any_cast<string>(a);
    string sb = boost::any_cast<string>(b);
    if(sa.find('.') != string::npos || sa.find(',') != string::npos){
        replace(sa.begin(), sa.end(), ',', '.');
    }
    if(sb.find('.') != string::npos || sb.find(',') != string::npos){
        replace(sb.begin(), sb.end(), ',', '.');
    }
    if(stof(sa) > stof(sb)) return a;
    else if(stof(sa) < stof(sb)) return b;
    else return "None";
}
return "None";
}