#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(string text, string target) {
    vector<int> result;
    if (target.empty()) return result;
    
    size_t pos = text.find(target, 0);
    while (pos != string::npos) {
        result.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return result;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}