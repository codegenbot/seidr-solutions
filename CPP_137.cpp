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
    float numA, numB;
    if (sscanf(boost::any_cast<string>(a).c_str(), "%f", &numA) == 1 && sscanf(boost::any_cast<string>(b).c_str(), "%f", &numB) == 1) {
        if (numA > numB) {
            return a;
        } else if (numA < numB) {
            return b;
        }
    }
}
return "None";
}