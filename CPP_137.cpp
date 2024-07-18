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
    float a_float = stof(boost::any_cast<string>(a), NULL);
    float b_float = stof(boost::any_cast<string>(b), NULL);
    if (a_float > b_float) {
        return a;
    } else if (a_float < b_float) {
        return b;
    } else {
        return "None";
    }
} else if ((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))) {
    float a_float = stof(boost::any_cast<string>(a), NULL);
    float b_float = stof(boost::any_cast<string>(b), NULL);
    if (a_float > b_float) {
        return a;
    } else if (a_float < b_float) {
        return b;
    } else {
        return "None";
    }
}