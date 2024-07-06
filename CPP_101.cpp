std::vector<std::string> words_string(std::string s) {
    std::vector<std::string> result;
    std::string word = "";
    for (char c : s) {
        if (c == ' ' || c == ',') {
            if (!word.empty()) {
                result.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        result.push_back(word);
    }
    return result;
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string s;
    std::cout << "Enter a string: ";
    std::getline(std::cin, s);
    std::vector<std::string> words = words_string(s);
    for (auto w : words) {
        std::cout << w << " ";
    }
    std::cout << "\n";
    
    // Testing the issame function
    std::vector<std::string> v1 = {"apple", "banana"};
    std::vector<std::string> v2 = {"apple", "banana"};
    std::vector<std::string> v3 = {"orange", "grape"};
    if (issame(v1, v2)) {
        std::cout << "v1 and v2 are the same.\n";
    } else {
        std::cout << "v1 and v2 are not the same.\n";
    }
    if (issame(v1, v3)) {
        std::cout << "v1 and v3 are the same.\n";
    } else {
        std::cout << "v1 and v3 are not the same.\n";
    }
    
}