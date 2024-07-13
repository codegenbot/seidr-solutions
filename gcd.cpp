```cpp
#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(std::string text, std::string target) {
    std::vector<int> result;
    int n = text.length();
    int m = target.length();

    for (int i = 0; i <= n - m; i++) {
        if (text.substr(i, m) == target) {
            result.push_back(i);
        }
    }

    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    string text;
    string target;
    vector<int> result;

    cin >> text >> target;
    result = indicesOfSubstring(text, target);

    cout << gcd(10, 15) << endl;

    for (int i : result)
        cout << i << " ";
    return 0;
}