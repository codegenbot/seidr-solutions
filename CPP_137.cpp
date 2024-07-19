if (a.type() == typeid(int) && b.type() == typeid(int)) {
    if (boost::any_cast<int>(a) > boost::any_cast<int>(b))
        return a;
    else if (boost::any_cast<int>(a) < boost::any_cast<int>(b))
        return b;
    else
        return "None";
}
else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    if (boost::any_cast<float>(a) > boost::any_cast<float>(b))
        return a;
    else if (boost::any_cast<float>(a) < boost::any_cast<float>(b))
        return b;
    else
        return "None";
}
else {
    string s1 = boost::any_cast<string>(a);
    string s2 = boost::any_cast<string>(b);
    
    if (s1.find_first_of(",.") != string::npos) {
        replace(s1.begin(), s1.end(), ',', '.');
    }
    if (s2.find_first_of(",.") != string::npos) {
        replace(s2.begin(), s2.end(), ',', '.');
    }
    
    if (stof(s1) > stof(s2))
        return a;
    else if (stof(s1) < stof(s2))
        return b;
    else
        return "None";
}