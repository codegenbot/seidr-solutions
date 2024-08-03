```
if (a.type() == typeid(int) && b.type() == typeid(int))
    return boost::any((int)std::max(at<int>(a), at<int>(b)));
else if (a.type() == typeid(float) && b.type() == typeid(float))
    return boost::any(std::max(at<float>(a), at<float>(b)));
else if (a.type() == typeid(double) && b.type() == typeid(double))
    return boost::any(std::max(at<double>(a), at<double>(b)));
else if (a.type() == typeid(string) && b.type() == typeid(string))
{
    string str1 = boost::any_cast<string>(a);
    string str2 = boost::any_cast<string>(b);
    istringstream iss1(str1);
    double num1;
    iss1 >> num1;
    istringstream iss2(str2);
    double num2;
    iss2 >> num2;
    if (num1 > num2)
        return a;
    else if (num1 < num2)
        return b;
    else
        return boost::any("None");
}
else
    return boost::any("None");