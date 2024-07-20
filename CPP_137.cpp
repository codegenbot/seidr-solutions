if(a.type() == typeid(int) && b.type() == typeid(int)){
    int intA = boost::any_cast<int>(a);
    int intB = boost::any_cast<int>(b);
    if(intA > intB) return intA;
    else if(intA < intB) return intB;
    else return "None";
} else if(a.type() == typeid(float) && b.type() == typeid(float)){
    float floatA = boost::any_cast<float>(a);
    float floatB = boost::any_cast<float>(b);
    if(floatA > floatB) return floatA;
    else if(floatA < floatB) return floatB;
    else return "None";
} else if(a.type() == typeid(string) && b.type() == typeid(string)){
    string strA = boost::any_cast<string>(a);
    string strB = boost::any_cast<string>(b);
    replace(strA.begin(), strA.end(), ',', '.');
    replace(strB.begin(), strB.end(), ',', '.');
    if(stof(strA) > stof(strB)) return strA;
    else if(stof(strA) < stof(strB)) return strB;
    else return "None";
} else if((a.type() == typeid(int) && b.type() == typeid(string))
        || (a.type() == typeid(string) && b.type() == typeid(int))){
    int intA = (a.type() == typeid(int)) ? boost::any_cast<int>(a) : stoi(boost::any_cast<string>(a));
    int intB = (b.type() == typeid(int)) ? boost::any_cast<int>(b) : stoi(boost::any_cast<string>(b));
    if(intA > intB) return intA;
    else if(intA < intB) return intB;
    else return "None";
}
return boost::any();
}