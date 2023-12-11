#include <iostream>
using namespace std;
int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
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
    cin >> a >> b;
    cout << gcd(a, b) << endl;
    string text, target;
    cin >> text >> target;
    vector<int> indices = indicesOfSubstring(text, target);
    for (int i = 0; i < indices.size(); i++) {
        cout << indices[i] << " ";
    }
    return 0;
}