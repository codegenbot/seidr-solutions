#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length()) return false;
    for (int i = 0; i < s1.length(); ++i)
        if (s1[i] != s2[i]) return false;
    return true;
}

int main() {
    std::vector<std::string> strings;
    std::string substring;

    // Read input from user
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, substring);
        strings.push_back(substring);
    }

    // Read the target substring
    std::cout << "Enter the target substring: ";
    std::getline(std::cin, substring);

    // Filter the strings by the given substring
    vector<string> result = filter_by_substring(strings, substring);

    // Print the filtered strings
    cout << "Filtered strings:" << endl;
    for (const auto& s : result) {
        cout << s << endl;
    }

    return 0;
}