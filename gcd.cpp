#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

std::vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    for (int i = 0; i <= text.size() - target.size(); i++) {
        bool found = true;
        for (int j = 0; j < target.size(); j++) {
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
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    cin >> target;
    cin.ignore(); 
    vector<int> indices = indicesOfSubstring(text, target);

    int minIndex = *std::min_element(indices.begin(), indices.end());
    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << std::endl;
    cout << "GCD of indices: " << gcd(minIndex, minIndex) << std::endl;

    return 0;
}