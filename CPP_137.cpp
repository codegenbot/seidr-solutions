if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
    return a;
} else if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
    return a;
} else if (boost::any_cast<std::string>(a) > boost::any_cast<std::string>(b)) {
    return a;
} else if (boost::any_cast<int>(a) == boost::any_cast<int>(b)) {
    return "None";
} else if (boost::any_cast<float>(a) == boost::any_cast<float>(b)) {
    return "None";
} else {
    return b;
}