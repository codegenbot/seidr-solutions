#include <iostream>
#include <vector>
#include <string>

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
    char space;
    cin >> a >> space >> b;

    string text, target;
    cin >> text >> space >> target;

    cout << gcd(a, b) << endl;

    vector<int> result = findSubstringIndices(text, target);
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
}