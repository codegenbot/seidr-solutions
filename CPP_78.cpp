int hex_key(std::string num) {
    #include <string>
    int count = 0;
    for (char c : num) {
        if (!std::isdigit(c) && !std::ispunct(c) && !std::isxdigit(c)) { 
            count++;
        }
    }
    return count;