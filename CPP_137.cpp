using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (float)a < b ? &b : &a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (int)a > b ? &a : &b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (a.convert_to<string>() >= b.convert_to<string>()) {
            return a;
        } else {
            return b;
        }
    } else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        int x = boost::any_cast<int>(b);
        string s = boost::any_cast<string>(a);
        if ((float)x >= stof(s)) {
            return &b;
        } else {
            return a;
        }
    } else if (b.type() == typeid(string) && (a.type() == typeid(int) || a.type() == typeid(float))) {
        int x = boost::any_cast<int>(a);
        string s = boost::any_cast<string>(b);
        if ((float)x >= stof(s)) {
            return &a;
        } else {
            return b;
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if ((int)a > (int)b) {
            return a;
        } else if ((int)a < (int)b) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if ((float)a > (float)b) {
            return a;
        } else if ((float)a < (float)b) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    return "None";
}