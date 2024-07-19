if (a.type() == typeid(int) && b.type() == typeid(int)) {
    if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
        return a;
    } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
        return b;
    }
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
        return a;
    } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
        return b;
    }
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    float val1, val2;
    if (boost::any_cast<string>(a).find_first_of(",.") != string::npos) {
        val1 = stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find_first_of(","), 1, "."));
    } else {
        val1 = stof(boost::any_cast<string>(a));
    }
    if (boost::any_cast<string>(b).find_first_of(",.") != string::npos) {
        val2 = stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find_first_of(","), 1, "."));
    } else {
        val2 = stof(boost::any_cast<string>(b));
    }
    if (val1 > val2) {
        return a;
    } else if (val1 < val2) {
        return b;
    }
}
return "None";
}