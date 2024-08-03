boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<float>(a)) {
        float af = boost::any_cast<float>(a);
        float bf = boost::any_cast<float>(b);
        return af > bf ? a : bf == af ? any("None") : b;
    } else if (is_any_of<double>(a)) {
        double ad = boost::any_cast<double>(a);
        double bd = boost::any_cast<double>(b);
        return ad > bd ? a : bd > ad ? b : any("None");
    } else if (is_any_of<int>(a)) {
        int ai = boost::any_cast<int>(a);
        int bi = boost::any_cast<int>(b);
        return ai > bi ? a : bi > ai ? b : any("None");
    } else if (is_string(a)) {
        string as = boost::any_cast<string>(a);
        string bs = boost::any_cast<string>(b);
        float af = stof(as);
        float bf = stof(bs);
        return af > bf ? a : bf > af ? b : any("None");
    } else {
        return any("None");
    }
}