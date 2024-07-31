```cpp
int main() {
    int n;
    std::cin >> n;

    std::vector<std::string> strings; // Initialize empty vector
    for (int i = 0; i < n; ++i) {
        std::string s;
        getline(std::cin, s);
        
        while (s.back() == '\n') {
            s.pop_back();
        }
        
        if (i > 0) 
            std::cout << " "; 
        std::cout << s << std::endl;
        strings.push_back(s); // Add string to the vector
    }

    std::string substring;
    getline(std::cin, substring);

    auto result1 = filter_by_substring(strings, substring);

    if (areEqual(result1, strings)) {
        for (const auto& s : strings) {
            std::cout << s << std::endl;
        }
    } else {
        std::cout << "No common elements found." << std::endl;
    }

    return 0;
}