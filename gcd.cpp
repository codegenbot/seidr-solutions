#include <iostream>
#include <string>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    for (int i = 0; i < text.size() - target.size() + 1; i++) {
        if (text.substr(i, target.size()) == target) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int a, b;
    string text, target;
    cin >> a >> b;
    if (a < 0 || b < 0) {
        cout << "Invalid input. Please enter two positive integers." << endl;
        return 1;
    }
    cin >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);
    if (result.empty()) {
        cout << "Target string not found in the text." << endl;
        return 1;
    }
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}