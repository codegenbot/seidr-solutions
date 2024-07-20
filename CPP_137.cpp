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
    string strA = boost::any_cast<string>(a);
    string strB = boost::any_cast<string>(b);
    if(strA.find_first_of(".,") != string::npos){
        replace(strA.begin(), strA.end(), ',', '.');
    }
    if(strB.find_first_of(".,") != string::npos){
        replace(strB.begin(), strB.end(), ',', '.');
    }
    if(stof(strA) > stof(strB)){
        return a;
    } else if(stof(strA) < stof(strB)){
        return b;
    } else {
        return "None";
    }
} else {
    return "None";
}