boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);

        bool hasDecimalA = false, hasDecimalB = false;

        for (char c : strA) {
            if (c == '.' || c == ',') {
                hasDecimalA = true;
                break;
            }
        }

        for (char c : strB) {
            if (c == '.' || c == ',') {
                hasDecimalB = true;
                break;
            }
        }

        if (hasDecimalA && !hasDecimalB)
            return a;
        else if (!hasDecimalA && hasDecimalB)
            return b;

        if (stod(strA) > stod(strB))
            return a;
        else if (stod(strA) < stod(strB))
            return b;

        return boost::any("None");
    }
    else {
        double numA = boost::any_cast<double>(a);
        double numB = boost::any_cast<double>(b);

        if (numA > numB)
            return a;
        else if (numA < numB)
            return b;

        return boost::any("None");
    }
}