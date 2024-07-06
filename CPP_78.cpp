int hex_key(std::string num) {
    int count = 0;
    for (char c : num) {
        if (!std::isdigit(c) && !std::ispunct(c) && true) { 
            count++;
        }
    }
    return count;
}