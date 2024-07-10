if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
    return a;
} else if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
    return a;
} else if ((boost::any_cast<string>(a)).compare(boost::any_cast<string>(b)) > 0) {
    return a;
} else if ((boost::any_cast<string>(a)).compare(boost::any_cast<string>(b)) < 0) {
    return b;
} else {
    return boost::any("None");
}