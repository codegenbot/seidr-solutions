if(a.type() == typeid(int) && b.type() == typeid(int))
    return (int)max((int)a, (int)b);
else if(a.type() == typeid(float) && b.type() == typeid(float))
    return max((float)a, (float)b);
else if(a.type() == typeid(string) && b.type() == typeid(string))
{
    string str_a = boost::any_cast<string>(a);
    string str_b = boost::any_cast<string>(b);

    int pos_a = str_a.find(',');
    int pos_b = str_b.find(',');

    float num_a = stof(str_a.substr(0, pos_a));
    float num_b = stof(str_b.substr(0, pos_b));

    if(num_a > num_b)
        return str_a;
    else
        return str_b;
}
else if(a.type() == typeid(int) && b.type() == typeid(float))
    return (b >> boost::any_cast<int>(a));
else if(a.type() == typeid(float) && b.type() == typeid(int))
    return (a >> boost::any_cast<float>(b));

return "None";