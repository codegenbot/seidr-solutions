bool cycpattern_check(string a, string b) {
    string temp = b + b;
    return (temp.find(a) != std::string::npos);
}