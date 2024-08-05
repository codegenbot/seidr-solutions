#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> parts = {""};
    for (int i = 0; i <= str.size(); ++i) {
        if ((i == str.size() || str[i] == '-') && parts.back().size() > 0) {
            parts.back().back() = toupper(parts.back().back());
            parts.push_back("");
        } else if (str[i] != '-') {
            parts.back() += tolower(str[i]);
        }
    }
    return std::string("#").append(std::accumulate(parts.begin(), parts.end(), std::string()), 
                        [](const std::string& a, const std::string& b) { return a + std::string(1).toupper() + b; });
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string str;
        cin >> str;
        cout << kebabToCamel(str) << endl;
    }
    return 0;
}