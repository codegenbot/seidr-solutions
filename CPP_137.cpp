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
    string str1 = boost::any_cast<string>(a);
    string str2 = boost::any_cast<string>(b);
    float num1 = stof(str1);
    float num2 = stof(str2);
    if (num1 > num2) {
        return a;
    } else if (num1 < num2) {
        return b;
    } else {
        return "None";
    }
}
}