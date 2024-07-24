#include <vector>
#include <iostream>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        result.push_back(pos);
        pos += target.length();
    }
    return result;
}

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int gcdVal = __gcd(num1, num2);
    cout << gcdVal << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}