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
    float floatA, floatB;
    try {
        floatA = stof(boost::any_cast<string>(a));
        floatB = stof(boost::any_cast<string>(b));
    } catch (...) {
        return "None";
    }
    if (floatA > floatB) {
        return a;
    } else if (floatA < floatB) {
        return b;
    }
}
return "None";
}