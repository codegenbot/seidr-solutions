std::string kebabToCamel(const std::string& str) {
    size_t start = 0, end;

    while ((end = str.find(' ')) != std::string::npos) {
        start = end + 1;
    }

    if (start > 0)
        str[0] = toupper(str[0]);

    for (; end != std::string::npos; ) {
        end = str.find('-', start);
        size_t pos = str.find(' ', end);
        if (pos == std::string::npos) 
            pos = str.length();
        
        if (end != std::string::npos)
            str.replace(end, 1, toupper(str[edge++]));
        result += str.substr(start, pos - start);

        start = pos + 1;
    }

    return str;
}

int main() {
    std::string str;
    while (std::cin >> str) {
        std::cout << kebabToCamel(str) << std::endl;
    }
    return 0;
}