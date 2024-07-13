if (a.type() == boost::any::type::void_) {
    if (b.type() == boost::any::type::void_) return "None";
    a = b;
} else if (b.type() == boost::any::type::void_) return boost::any_cast<boost::any>(a);
boost::any max;
if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) max = a;
else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) max = b;
else {
    int a_int = boost::any_cast<int>(a);
    float a_float = boost::any_cast<float>(a);
    string a_str = boost::any_cast<string>(a);
    
    if (a_int > boost::any_cast<int>(b) && a_int > boost::any_cast<float>(b) && a_int > stof(to_string(boost::any_cast<string>(b))))
        max = a;
    else if (a_float > boost::any_cast<int>(b) && a_float > boost::any_cast<float>(b) && a_float > stof(to_string(boost::any_cast<string>(b))))
        max = a;
    else if (stof(to_string(a_str)) > boost::any_cast<int>(b) && stof(to_string(a_str)) > boost::any_cast<float>(b) && stof(to_string(a_str)) > boost::any_cast<float>(b))
        max = a;
    else
        max = b;
}
return max;