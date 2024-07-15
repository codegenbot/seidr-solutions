if (a.type() == typeid(int) && b.type() == typeid(int)) {
    int num1 = boost::any_cast<int>(a);
    int num2 = boost::any_cast<int>(b);
    if (num1 > num2) return num1;
    else if (num2 > num1) return num2;
    else return "None";
} else if (a.type() == typeid(float) && b.type() == typeid(float)) {
    float num1 = boost::any_cast<float>(a);
    float num2 = boost::any_cast<float>(b);
    if (num1 > num2) return num1;
    else if (num2 > num1) return num2;
    else return "None";
} else if (a.type() == typeid(string) && b.type() == typeid(string)) {
    string str1 = boost::any_cast<string>(a);
    string str2 = boost::any_cast<string>(b);
    if (str1.find_first_of(".,") != string::npos) {
        replace(str1.begin(), str1.end(), ',', '.');
    }
    if (str2.find_first_of(".,") != string::npos) {
        replace(str2.begin(), str2.end(), ',', '.');
    }
    if (stof(str1) > stof(str2)) return str1;
    else if (stof(str2) > stof(str1)) return str2;
    else return "None";
} else if (a.type() == typeid(int) && b.type() == typeid(string)) {
    int num = boost::any_cast<int>(a);
    string str = boost::any_cast<string>(b);
    if (to_string(num) == str) return "None";
    else if (num > stof(str)) return num;
    else return str;
} else if (a.type() == typeid(string) && b.type() == typeid(int)) {
    string str = boost::any_cast<string>(a);
    int num = boost::any_cast<int>(b);
    if (to_string(num) == str) return "None";
    else if (stof(str) > num) return str;
    else return num;
}
}