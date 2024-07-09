int how_many_times(const std::string& str, const std::string& substring) {
    int count = 0;
    size_t pos = 0;

    while ((pos = str.find(substring)) != std::string::npos) {
        count++;
        str.erase(0, pos + substring.length());
    }
    return count;
}

int main() {
    const char* input_str = "Hello, Hello, World!";
    const char* sub_string = "Hello";
    
    int result = how_many_times(std::string(input_str), std::string(sub_string));
    return 0;
}