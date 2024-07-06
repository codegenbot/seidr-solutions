#include <iostream>
#include <vector>
#include <string>

bool isSame(const std::string& str1, const std::string& str2) {
    if (str1.length() != str2.length())
        return false;
    for (int i = 0; i < str1.length(); i++)
        if (str1[i] != str2[i])
            return false;
    return true;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    for(auto str : strings) {
        if(str.find(substring) != std::string::npos)
            result.push_back(str);
    }
    return result;
}

int main() {
    int n;
    std::cout << "Enter the number of strings: ";
    std::cin >> n;

    std::vector<std::string> strings(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter string " << i + 1 << ": ";
        std::getline(std::cin, strings[i]);
    }

    std::string sub;
    std::cout << "Enter the substring: ";
    std::cin >> sub;

    std::vector<std::string> result = filter_by_substring(strings, sub);

    if(result.empty()) {
        std::cout << "No strings contain the substring.\n";
    } else {
        for(auto str : result) {
            bool isSameToFirst = true;
            for(int i = 1; i < result.size(); i++) {
                if(!isSame(str, result[i])) {
                    isSameToFirst = false;
                    break;
                }
            }

            if(isSameToFirst)
                std::cout << str << " (same to all others)\n";
            else
                std::cout << str << "\n";
        }
    }

    return 0;
}