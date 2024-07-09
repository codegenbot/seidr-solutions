if (a.type() == typeid(int) && b.type() == typeid(float)) {
    return max(boost::any_cast<int>(a), boost::any_cast<float>(b));
} else if (a.type() == typeid(float) && b.type() == typeid(int)) {
    return max(boost::any_cast<float>(a), boost::any_cast<int>(b));
} else if ((a.type() == typeid(int) || a.type() == typeid(float)) &&
           (b.type() == typeid(int) || b.type() == typeid(float))) {
    return (boost::any_cast<float>(a) == boost::any_cast<float>(b)) ? "None" : max(boost::any_cast<float>(a), boost::any_cast<float>(b));
} else {
    return (boost::any_cast<string>(a) == boost::any_cast<string>(b)) ? "None" : max(boost::any_cast<string>(a), boost::any_cast<string>(b));
}