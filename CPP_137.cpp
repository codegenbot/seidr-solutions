using namespace boost;

any compare_one(any a, any b) {
    if (is_any_of<double>(a)) {
        if (is_any_of<double>(b)) {
            return (get<double>(a) > get<double>(b)) ? a : ((get<double>(a) < get<double>(b)) ? b : any("None")));
        } else {
            double da = get<double>(a);
            string db = boost::any_cast<string>(b);
            if (stod(db) > da)
                return b;
            else if (stod(db) < da)
                return a;
            else
                return any("None");
        }
    } else {
        string sa = boost::any_cast<string>(a);
        double db = get<double>(b);
        if (stod(sa) > db)
            return a;
        else if (stod(sa) < db)
            return b;
        else
            return any("None");
    }
}