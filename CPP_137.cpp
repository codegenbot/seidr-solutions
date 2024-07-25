if (a.type() == typeid(int) && b.type() == typeid(float)) {
    return boost::any_cast<float>(b);
} else if (a.type() == typeid(float) && b.type() == typeid(int)) {
    return boost::any_cast<float>(a);
} else if ((a.type() == typeid(int) || a.type() == typeid(float)) && (b.type() == typeid(int) || b.type() == typeid(float))) {
    if (stof(boost::any_cast<string>(a)) > stof(boost::any_cast<string>(b))) {
        return a;
    } else if (stof(boost::any_cast<string>(a)) < stof(boost::any_cast<string>(b))) {
        return b;
    } else {
        return "None";
    }
} else {
    return "None";
}