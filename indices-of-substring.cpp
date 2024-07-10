```
#include <bits/stdc++.h>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; ++i) {
        if (text.find(target) != std::string::npos) {
            result.push_back(i);
            // start searching from the next character
            i = text.find(target, i + 1);
        }
    }

    return result;
}

int main() {
    std::string text;
    cin >> text;
    std::string target;
    cin >> target;

    std::vector<int> indices = indicesOfSubstring(text, target);

    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}