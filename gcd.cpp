#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    int n = text.size();
    int m = target.size();

    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }

    return indices;
}

int main() {
    int a, b;
    string text, target;

    std::cin >> a >> b;
    std::cin.ignore();
    std::getline(std::cin, text);
    std::getline(std::cin, target);

    cout << gcd(a, b) << endl;
    
    vector<int> result = indicesOfSubstring(text, target);
    for (int idx : result) {
        cout << idx << " ";
    }

    return 0;
}