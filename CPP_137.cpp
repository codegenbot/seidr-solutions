using boost::any_cast;

boost::any compare_one(boost::any a, boost::any b) {
    double da = any_cast<double>(a);
    double db = any_cast<double>(b);

    if (da > db)
        return a;
    else if (db > da)
        return b;
    else
        return "None";
}