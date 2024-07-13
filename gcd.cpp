#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        result.push_back(pos);
        pos += 1; // increment position to find next occurrence
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << __gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}