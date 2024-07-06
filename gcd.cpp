#include <vector>
#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b) {
    if (a == 0 || b == 0) return 1;
    return gcd(b % a, a);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    for (int i = 0; i < text.size() - target.size() + 1; ++i) {
        if (text.substr(i, target.size()) == target) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    cout << "Enter a text string: ";
    string text;
    cin >> text;
    cout << "Enter a target string: ";
    string target;
    cin >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    cout << "The indices of the target string in the text are: ";
    for (auto i : indices) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}