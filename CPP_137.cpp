if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(boost::any_cast<int>(a), boost::any_cast<float>(b));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(boost::any_cast<float>(a), boost::any_cast<int>(b));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (isdigit(boost::any_cast<string>(a)[0]) && isdigit(boost::any_cast<string>(b)[0])) {
            return max(stof(boost::any_cast<string>(a)), stof(boost::any_cast<string>(b)));
        } else {
            return max(boost::any_cast<string>(a), boost::any_cast<string>(b));
        }
    } else {
        if (a == b) {
            return "None";
        } else {
            return max(boost::any_cast<string>(a), boost::any_cast<string>(b));
        }
    }
}