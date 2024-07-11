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
    float numA, numB;
    if (boost::any_cast<string>(a).find(',') != string::npos) {
        replace(boost::any_cast<string>(a).begin(), boost::any_cast<string>(a).end(), ',', '.');
    }
    if (boost::any_cast<string>(b).find(',') != string::npos) {
        replace(boost::any_cast<string>(b).begin(), boost::any_cast<string>(b).end(), ',', '.');
    }
    numA = stof(boost::any_cast<string>(a));
    numB = stof(boost::any_cast<string>(b));
    if (numA > numB) {
        return a;
    } else if (numA < numB) {
        return b;
    } else {
        return "None";
    }
} else {
    return "None";
}