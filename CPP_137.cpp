using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<string>(a)) {
        if (is_any_of<string>(b)) {
            return (stoi(get<string>(a)) > stoi(get<string>(b))) ? get<string>(a) : ((stoi(get<string>(a)) < stoi(get<string>(b))) ? get<string>(b) : "None");
        } else if (is_any_of<float>(b)) {
            return (stod(get<string>(a)) > get<float>(b)) ? get<string>(a) : ((stod(get<string>(a)) < get<float>(b)) ? get<string>(b) : "None");
        }
    } else if (is_any_of<float>(a)) {
        if (is_any_of<string>(b)) {
            return (get<float>(a) > stod(get<string>(b))) ? get<string>(b) + "" : ((get<float>(a) < stod(get<string>(b))) ? get<string>(b) : "None");
        } else if (is_any_of<float>(b)) {
            return (get<float>(a) > get<float>(b)) ? boost::any(a) : ((get<float>(a) < get<float>(b)) ? b : "None");
        }
    }

    return (get<float>(a) > get<float>(b)) ? a : ((get<float>(a) < get<float>(b)) ? b : "None");
}