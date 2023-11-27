if (type_id(a) == typeid(int) && type_id(b) == typeid(int)) {
    if (boost::any_cast<int>(a) > boost::any_cast<int>(b))
        return a;
    else if (boost::any_cast<int>(a) < boost::any_cast<int>(b))
        return b;
    else
        return "None";
}
else if (type_id(a) == typeid(float) && type_id(b) == typeid(float)) {
    if (boost::any_cast<float>(a) > boost::any_cast<float>(b))
        return a;
    else if (boost::any_cast<float>(a) < boost::any_cast<float>(b))
        return b;
    else
        return "None";
}
else if (type_id(a) == typeid(string) && type_id(b) == typeid(string)) {
    string valueA = boost::any_cast<string>(a);
    string valueB = boost::any_cast<string>(b);
    // Remove commas in the string
    valueA.erase(std::remove(valueA.begin(), valueA.end(), ','), valueA.end());
    valueB.erase(std::remove(valueB.begin(), valueB.end(), ','), valueB.end());
    
    if (stof(valueA) > stof(valueB))
        return a;
    else if (stof(valueA) < stof(valueB))
        return b;
    else
        return "None";
}
else {
    return "None";
}
}