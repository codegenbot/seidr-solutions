using namespace boost;

any compare_one(any a, any b) {
    if (is_none(a) && is_none(b)) return "None";
    
    double ad = get<double>(a);
    double bd = get<double>(b);
    
    if (!get<string>(a).empty()) {
        string as = get<string>(a);
        if (!as.find(".") == string::npos || !as.find(",") == string::npos) 
            ad = stod(as);
    }
    
    if (!get<string>(b).empty()) {
        string bs = get<string>(b);
        if (!bs.find(".") == string::npos || !bs.find(",") == string::npos) 
            bd = stod(bs);
    }
    
    if (ad > bd) return a;
    else if (bd > ad) return b;
    else return "None";
}