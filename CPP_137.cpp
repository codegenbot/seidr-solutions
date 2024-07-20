if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int x = boost::any_cast<int>(a);
    int y = boost::any_cast<int>(b);
    if (x > y) return a;
    else if (y > x) return b;
    else return "None";
} 
else if ((a.type() == typeid(double) || a.type() == typeid(float)) && (b.type() == typeid(double) || b.type() == typeid(float))) {
    double x = boost::any_cast<double>(a);
    double y = boost::any_cast<double>(b);
    if (x > y) return a;
    else if (y > x) return b;
    else return "None";
} 
else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) && (b.type() == typeid(string) || b.type() == typeid(wstring))) {
    string sx = boost::any_cast<string>(a);
    string sy = boost::any_cast<string>(b);
    if (stod(sx) > stod(sy)) return a;
    else if (stod(sy) > stod(sx)) return b;
    else return "None";
} 
else {
    return "None";
}