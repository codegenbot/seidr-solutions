if (a.type() == typeid(int) && b.type() == typeid(int)) {
    if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
        return b;
    } else if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
        return a;
    }
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
        return b;
    } else if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
        return a;
    }
} else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
    float floatA = stof(boost::any_cast<std::string>(a).replace(boost::any_cast<std::string>(a).find(','), 1, "."));
    float floatB = stof(boost::any_cast<std::string>(b).replace(boost::any_cast<std::string>(b).find(','), 1, "."));
    if (floatA < floatB) {
        return b;
    } else if (floatA > floatB) {
        return a;
    }
}
return "None";
}