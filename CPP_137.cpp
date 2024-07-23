if (a.type() == boost::any::typeless_type && 
    b.type() != boost::any::typeless_type) {
    if (b.type() == boost::any::typeid_type) {
        return a;
    } else {
        return b;
    }
} else if (a.type() != boost::any::typeless_type && 
           b.type() == boost::any::typeless_type) {
    if (a.type() == boost::any::typeid_type) {
        return b;
    } else {
        return a;
    }
} else if (a.type() == boost::any::typeless_type && 
           b.type() == boost::any::typeless_type) {
    string s1 = a.cast<string>();
    string s2 = b.cast<string>();
    double d1 = atof(s1.c_str());
    double d2 = atof(s2.c_str());
    if (d1 > d2) return a;
    else if (d1 < d2) return b;
    else return boost::any("None");
} else {
    double d1 = boost::any_cast<double>(a);
    double d2 = boost::any_cast<double>(b);
    if (d1 > d2) return a;
    else if (d1 < d2) return b;
    else return boost::any("None");
}