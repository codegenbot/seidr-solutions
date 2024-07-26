if (a.type() == typeid(int) && b.type() == typeid(float)) {
    return max(boost::any_cast<int>(a), boost::any_cast<float>(b));
} else if ((a.type() == typeid(float) && b.type() == typeid(int))) {
    return max(boost::any_cast<float>(a), boost::any_cast<int>(b));
} else if ((a.type() == typeid(float) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(float))) {
    float floatA = stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(","), 1, "."));
    float floatB = stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(","), 1, "."));
    return max(floatA, floatB);
} else if ((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))) {
    return max(stof(boost::any_cast<string>(a).replace(boost::any_cast<string>(a).find(","), 1, ".")), stof(boost::any_cast<string>(b).replace(boost::any_cast<string>(b).find(","), 1, ".")));
} else if (a == b) {
    return "None";
}