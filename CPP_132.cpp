bool is_nested(std::string str) {
    int open = 0, close = 0;
    std::string temp; 
    for (char c : str) {
        if (c == '[') open++;
        else if (c == ']') close++;
        temp += c; 
    }
    return open > 0 && close >= open;
}