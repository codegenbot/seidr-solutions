```
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = a.cast<string>();
        string strB = b.cast<string>();
        if (strA != "None" && strB != "None") {
            if (strA > strB) return boost::any(a);
            else if (strA < strB) return boost::any(b);
            else return boost::any("None");
        } else if (strA == "None" && strB == "None") return boost::any("None");
        else {
            if (stof(strA) > stof(strB)) return boost::any(a);
            else if (stof(strA) < stof(strB)) return boost::any(b);
            else return boost::any("None");
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int numA = a.cast<int>();
        int numB = b.cast<int>();
        if (numA > numB) return boost::any(a);
        else if (numA < numB) return boost::any(b);
        else return boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float numA = a.cast<float>();
        int numB = b.cast<int>();
        if (numA > numB) return boost::any(a);
        else if (numA < numB) return boost::any(b);
        else return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int numA = a.cast<int>();
        float numB = b.cast<float>();
        if (numA > numB) return boost::any(a);
        else if (numA < numB) return boost::any(b);
        else return boost::any("None");
    } else {
        return boost::any("None");
    }
}