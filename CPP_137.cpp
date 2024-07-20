if(a == b) return "None";
if(a.type() == typeid(int) || a.type() == typeid(float)){
    if(b.type() == typeid(int) || b.type() == typeid(float)){
        return max(boost::any_cast<int>(a), boost::any_cast<int>(b));
    }
}
return a < b ? b : a;
}