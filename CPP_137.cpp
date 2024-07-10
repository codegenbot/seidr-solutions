using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<string>(a)) {
        string str1 = any_cast<string>(a);
        if (is_any_of<string>(b)) {
            string str2 = any_cast<string>(b);
            return (stod(str1) > stod(str2)) ? a : ((stod(str1) < stod(str2)) ? b : boost::any("None"));
        } else {
            double num2 = any_cast<double>(b);
            return (stod(str1) > num2) ? a : ((stod(str1) < num2) ? b : boost::any("None"));
        }
    } else if (is_any_of<string>(b)) {
        string str2 = any_cast<string>(b);
        double num1 = any_cast<double>(a);
        return (num1 > stod(str2)) ? a : ((num1 < stod(str2)) ? b : boost::any("None"));
    } else {
        double num1 = any_cast<double>(a);
        double num2 = any_cast<double>(b);
        return (num1 > num2) ? a : ((num1 < num2) ? b : boost::any("None"));
    }
}