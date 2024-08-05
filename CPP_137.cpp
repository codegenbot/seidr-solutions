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
    float num1, num2;
    if (boost::any_cast<string>(a).find(',') != string::npos) {
        boost::replace_all(boost::any_cast<string>(a), ",", ".");
    }
    if (boost::any_cast<string>(b).find(',') != string::npos) {
        boost::replace_all(boost::any_cast<string>(b), ",", ".");
    }
    num1 = stof(boost::any_cast<string>(a));
    num2 = stof(boost::any_cast<string>(b));
    if (num1 > num2) {
        return a;
    } else if (num1 < num2) {
        return b;
    } else {
        return "None";
    }
} else {
    return "None";
}