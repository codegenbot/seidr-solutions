int hex_key(const std::string& input) { 
    if(input.empty()) {
        return 0;
    }
    int result = 0;
    for(char c : input) {
        result += (int)c;
    }
    return result;
}