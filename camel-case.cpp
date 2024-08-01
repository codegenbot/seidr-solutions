#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& str) {
    std::string result;
    for (const auto& word : str.split("-")) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        result += word;
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;
        cout << camelCase(s) << endl;
    }
    return 0;
}