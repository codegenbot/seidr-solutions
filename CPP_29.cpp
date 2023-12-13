```cpp
bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    // implementation goes here
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix) {
    std::vector<std::string> filteredStrings;
    
    for (const auto& str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filteredStrings.push_back(str);
        }
    }
    
    return filteredStrings;
}

int main() {
    // test cases
    return 0;
}
```