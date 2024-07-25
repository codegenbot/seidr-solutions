if (a.type() == typeid(int) && b.type() == typeid(int)) {
    if ((int)a > (int)b) return a;
    else if ((int)a < (int)b) return b;
    else return boost::any("None");
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    if ((float)a > (float)b) return a;
    else if ((float)a < (float)b) return b;
    else return boost::any("None");
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    if (a.convert_to<string>().compare(b.convert_to<string>()) > 0) return a;
    else if (a.convert_to<string>().compare(b.convert_to<string>()) < 0) return b;
    else return boost::any("None");
} else if ((a.type() == typeid(int) && b.type() != typeid(int)) ||
           (a.type() != typeid(int) && b.type() == typeid(int))) {
    return boost::any("None");
}