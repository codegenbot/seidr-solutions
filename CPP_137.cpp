```
if (a.type() == typeid(int) && b.type() == typeid(int)) {
    if ((int)a > (int)b) return a;
    else if ((int)a < (int)b) return b;
    else return boost::any("None");
}
else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    if ((float)a > (float)b) return a;
    else if ((float)a < (float)b) return b;
    else return boost::any("None");
}
else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    if (a.convert_to<string>() > b.convert_to<string>()) return a;
    else if (a.convert_to<string>() < b.convert_to<string>()) return b;
    else return boost::any("None");
}
else if (a.type() == typeid(int) && b.type() == typeid(float)) {
    if ((int)a > (float)b) return a;
    else if ((int)a < (float)b) return b;
    else return boost::any("None");
}
else if (a.type() == typeid(float) && b.type() == typeid(int)) {
    if ((float)a > (int)b) return a;
    else if ((float)a < (int)b) return b;
    else return boost::any("None");
}
else if (a.type() == typeid(string) && b.type() == typeid(int)) {
    if (a.convert_to<string>() > to_string((int)b)) return a;
    else if (a.convert_to<string>() < to_string((int)b)) return b;
    else return boost::any("None");
}
else if (a.type() == typeid(string) && b.type() == typeid(float)) {
    if (a.convert_to<string>() > to_string((float)b)) return a;
    else if (a.convert_to<string>() < to_string((float)b)) return b;
    else return boost::any("None");
}
else return boost::any("None");