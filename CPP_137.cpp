if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        } else {
            return "None";
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        float fa = stof(boost::any_cast<string>(a).c_str(), nullptr);
        float fb = stof(boost::any_cast<string>(b).c_str(), nullptr);
        if (fa > fb) {
            return a;
        } else if (fa < fb) {
            return b;
        } else {
            return "None";
        }
    } else {
        return "None";
    }
}