bool issame(std::vector<std::string> a, std::vector<std::string> b); // Declare 'b' as a vector of strings

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    
    std::vector<std::string> a = split_words(input);
    std::vector<std::string> b = split_words(input);
    
    if (issame(a, b)) {
        std::cout << "Same" << std::endl;
    } else {
        std::cout << "Different" << std::endl;
    }
    
    return 0;
}