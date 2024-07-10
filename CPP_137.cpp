```
boost::any compare_one(boost::any a, boost::any b) {
    if (boost::holds_alternative<int>(a) && boost::holds_alternative<double>(b)) {
        if (boost::get<int>(a) > boost::get<double>(b)) return a;
        else return b;
    }
    else if (boost::holds_alternative<double>(a) && boost::holds_alternative<int>(b)) {
        if (boost::get<double>(a) > boost::get<int>(b)) return a;
        else return b;
    }
    else if (boost::holds_alternative<std::string>(a) && boost::holds_alternative<double>(b)) {
        if (boost::get<std::string>(a) > std::to_string(boost::get<double>(b))) return a;
        else return b;
    }
    else if (boost::holds_alternative<double>(a) && boost::holds_alternative<std::string>(b)) {
        if (std::to_string(boost::get<double>(a)) > boost::get<std::string>(b)) return a;
        else return b;
    }
    else if (boost::holds_alternative<std::string>(a) && boost::holds_alternative<std::string>(b)) {
        if (boost::get<std::string>(a) > boost::get<std::string>(b)) return a;
        else return b;
    }
    else if (boost::holds_alternative<int>(a) && boost::holds_alternative<std::string>(b)) {
        if (std::to_string(boost::get<int>(a)) > boost::get<std::string>(b)) return a;
        else return b;
    }
    else if (boost::holds_alternative<std::string>(a) && boost::holds_alternative<int>(b)) {
        if (boost::get<std::string>(a) > std::to_string(boost::get<int>(b))) return a;
        else return b;
    }
    else if (boost::holds_alternative<double>(a) && boost::holds_alternative<double>(b)) {
        if (boost::get<double>(a) > boost::get<double>(b)) return a;
        else return b;
    }
    else {
        return boost::any();
    }
}