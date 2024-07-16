#include <iostream>
using namespace std;

// Function to find GCD
int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << endl;
    return 0;
}

// Indices of Substring (CW)
#include <iostream>
#include <vector>
#include <string>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += target.size();
    }
    return indices;
}

int main() {
    std::string text, target;
    cout << "Enter the text: ";
    cin >> text;
    cout << "Enter the target substring: ";
    cin >> target;
    auto indices = indicesOfSubstring(text, target);
    for (auto i : indices) {
        cout << i << " ";
    }
    return 0;
}