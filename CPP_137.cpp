if (a.type() == b.type()) {
    if (a.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b) ? a : b;
    } else if (a.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
    } else if (a.type() == typeid(string)) {
        return stof(boost::any_cast<string>(a)) > stof(boost::any_cast<string>(b)) ? a : b;
    }
}
return "None";