using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<string>(a)) {
        string s1 = any_cast<string>(a);
        if (is_any_of<string>(b)) {
            string s2 = any_cast<string>(b);
            if (stod(s1) < stod(s2))
                return a;
            else if (stod(s1) > stod(s2))
                return b;
            else
                return "None";
        } else {
            double d2 = any_cast<double>(b);
            if (stod(s1) < d2)
                return a;
            else if (stod(s1) > d2)
                return b;
            else
                return "None";
        }
    } else {
        double d1 = any_cast<double>(a);
        if (is_any_of<string>(b)) {
            string s2 = any_cast<string>(b);
            double d2 = stod(s2);
            if (d1 < d2)
                return b;
            else if (d1 > d2)
                return a;
            else
                return "None";
        } else {
            double d2 = any_cast<double>(b);
            if (d1 < d2)
                return b;
            else if (d1 > d2)
                return a;
            else
                return "None";
        }
    }
}