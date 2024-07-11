if(a.type() == typeid(int) && b.type() == typeid(int)){
    if(boost::any_cast<int>(a) > boost::any_cast<int>(b)){
        return a;
    }else if(boost::any_cast<int>(a) < boost::any_cast<int>(b)){
        return b;
    }
}else if(a.type() == typeid(float) && b.type() == typeid(float)){
    if(boost::any_cast<float>(a) > boost::any_cast<float>(b)){
        return a;
    }else if(boost::any_cast<float>(a) < boost::any_cast<float>(b)){
        return b;
    }
}else if(a.type() == typeid(string) && b.type() == typeid(string)){
    string strA = boost::any_cast<string>(a);
    string strB = boost::any_cast<string>(b);
    string::size_type szA;
    string::size_type szB;
    if(stof(strA,&szA) > stof(strB,&szB)){
        return a;
    }else if(stof(strA,&szA) < stof(strB,&szB)){
        return b;
    }
}
return "None";
}