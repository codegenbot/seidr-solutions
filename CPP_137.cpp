boost::any compare_one(boost::any a, boost::any b){
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
        replace(strA.begin(), strA.end(), ',', '.');
        replace(strB.begin(), strB.end(), ',', '.');
        float floatA = stof(strA);
        float floatB = stof(strB);
        if(floatA > floatB){
            return a;
        }else if(floatA < floatB){
            return b;
        }
    }
    return "None";
}