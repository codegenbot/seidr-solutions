boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int)) {
            if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
                return a;
            } else {
                return b;
            }
        } else if (a.type() == typeid(float)) {
            if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
                return a;
            } else {
                return b;
            }
        } else if (a.type() == typeid(string)) {
            if (stof(boost::any_cast<string>(a)) > stof(boost::any_cast<string>(b))) {
                return a;
            } else {
                return b;
            }
        }
    }

    return boost::any();
}