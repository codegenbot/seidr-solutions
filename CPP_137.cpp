boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (stoi(string(cast<string>(b).erase(0, 1)).erase(cast<string>(b).find(','))) > cast<int>(a))
            return b;
        else if (cast<int>(a) > stoi(string(cast<string>(b).erase(0, 1)).erase(cast<string>(b).find(','))))
            return a;
        else
            return boost::any("None");
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = cast<string>(a);
        size_t pos = str.find(',');
        double num1 = stod(str.erase(0, pos+1));
        double num2 = boost::any_cast<double>(b);
        if (num1 > num2)
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = cast<string>(a);
        size_t pos1 = str1.find(',');
        string str2 = cast<string>(b);
        size_t pos2 = str2.find(',');

        double num1 = stod(str1.erase(0, pos1+1));
        double num2 = stod(str2.erase(0, pos2+1));

        if (num1 > num2)
            return a;
        else
            return b;
    }
    else {
        throw std::runtime_error("Invalid input");
    }
}