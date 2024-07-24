if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int ai = boost::any_cast<int>(a);
    int bi = boost::any_cast<int>(b);
    if (ai > bi) return a;
    else if (ai < bi) return b;
    else return boost::any("None");
} 
else if ((a.type() == typeid(float) || a.type() == typeid(double)) && (b.type() == typeid(float) || b.type() == typeid(double))) {
    double da = boost::any_cast<double>(a);
    double db = boost::any_cast<double>(b);
    if (da > db) return a;
    else if (da < db) return b;
    else return boost::any("None");
} 
else if ((a.type() == typeid(string)) && (b.type() == typeid(string))) {
    string sa = boost::any_cast<string>(a);
    string sb = boost::any_cast<string>(b);
    if (sa > sb) return a;
    else if (sa < sb) return b;
    else return boost::any("None");
} 
else {
    if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) return a;
    else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) return b;
    else return boost::any("None");
}