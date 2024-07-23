#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> findSubstringIndices(const string& text, const string& target) {
    vector<int> indices;
    int targetLen = target.length();
    for (int i = 0; i <= text.length() - targetLen; ++i) {
        if (text.substr(i, targetLen) == target) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    int a, b;
    string input;
    getline(cin, input);
    istringstream iss(input);
    iss >> a >> b;

    string text, target;
    getline(cin, text);
    getline(cin, target);

    vector<int> result = findSubstringIndices(text, target);

    cout << gcd(a, b) << endl;

    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}