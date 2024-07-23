using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<float>(a)) {
        if (is_any_of<float>(b)) {
            return (get<float>(a) > get<float>(b)) ? a : ((get<float>(a) < get<float>(b)) ? b : boost::any("None")));
        } else if (is_any_of<string>(b)) {
            float float_val = atof(get<string>(b).c_str());
            return (get<float>(a) > float_val) ? a : ((get<float>(a) < float_val) ? b : boost::any("None")));
        } else {
            return boost::any("None");
        }
    } else if (is_any_of<string>(a)) {
        if (is_any_of<float>(b)) {
            float float_val = atof(get<string>(a).c_str());
            return (float_val > get<float>(b)) ? a : ((float_val < get<float>(b)) ? b : boost::any("None")));
        } else if (is_any_of<string>(b)) {
            string str1 = get<string>(a);
            string str2 = get<string>(b);
            return (str1 > str2) ? a : ((str1 < str2) ? b : boost::any("None")));
        } else {
            return boost::any("None");
        }
    } else {
        return boost::any("None");
    }
}