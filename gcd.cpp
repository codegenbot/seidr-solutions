#include <vector>
#include <algorithm>
#include <iostream>

std::vector<int> indicesOfSubstring(const std::string& text, const std::string& target) {
    std::vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != std::string::npos) {
        indices.push_back(pos);
        pos += target.size();
    }
    return indices;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    cin >> target;
    cin.ignore(); 
    vector<int> indices = indicesOfSubstring(text, target);

    int minIndex = *min_element(indices.begin(), indices.end());
    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    cout << "GCD of indices: " << gcd(minIndex, minIndex) << endl;

    return 0;
}