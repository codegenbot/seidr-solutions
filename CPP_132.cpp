bool is_nested(const std::string& str) {
    int count = 0;
    for (char c : str) {
        if (c == '[') {
            count++;
        } else if (c == ']') {
            count--;
        }
        if (count < 0) {
            return true;
        }
    }
    return count == 0;
}