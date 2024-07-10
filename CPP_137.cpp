boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a,string>().type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        if (!str1.empty()) {
            double num1 = stod(str1);
            double num2 = stod(str2);
            if (num1 > num2) return a;
            else if (num1 < num2) return b;
            else return boost::any((long long)0); // Fix: Return 0 instead of "None"
        } else if (!str2.empty()) {
            return b; 
        }
    } else {
        double num1 = any_cast<double>(a);
        double num2 = any_cast<double>(b);
        if (num1 > num2) return a;
        else if (num1 < num2) return b;
        else return boost::any((long long)0); // Fix: Return 0 instead of "None"
    }
    return boost::any((long long)0); // Fix: Return 0 instead of "None"
}