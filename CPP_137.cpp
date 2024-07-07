```
if (a.type() == typeid(int) && b.type() == typeid(int))
    return (int)a > (int)b ? a : b;
else if ((a.type() == typeid(double) || a.type() == typeid(float)) &&
        (b.type() == typeid(double) || b.type() == typeid(float)))
    return (boost::any_cast<double>(a) > boost::any_cast<double>(b)) ? a : b;
else if (a.type() == typeid(string) && b.type() == typeid(string))
{
    string str1 = boost::any_cast<string>(a);
    string str2 = boost::any_cast<string>(b);

    int num1 = std::stoi(str1.substr(0, str1.find(',')));
    int num2 = std::stoi(str2.substr(0, str2.find(',')));

    if (num1 > num2)
        return a;
    else if (num2 > num1)
        return b;
    else
        return boost::any("None");
}
else
    return boost::any("None");