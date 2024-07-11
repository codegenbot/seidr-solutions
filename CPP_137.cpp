if(a == b) return "None";
if(a.type() == typeid(int)){
    if(b.type() == typeid(int)){
        return max(boost::any_cast<int>(a), boost::any_cast<int>(b));
    } else {
        return b;
    }
} else if(a.type() == typeid(float)){
    if(b.type() == typeid(float)){
        return max(boost::any_cast<float>(a), boost::any_cast<float>(b));
    } else {
        return b;
    }
} else {
    if(b.type() == typeid(string)){
        return max(stof(boost::any_cast<string>(a)), stof(boost::any_cast<string>(b)));
    } else {
        return a;
    }
}