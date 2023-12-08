#include <vector>
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int getGCD(int a, int b) {
    if (a == 0) {
        return b;
    }
    return getGCD(b % a, a);
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
    while (cin >> a >> b) {
        if (a != 0 && b != 0) {
            cout << getGCD(a, b) << endl;
        } else {
            cout << "Invalid input." << endl;
        }
    }
    string text, target;
    cin >> text >> target;
    vector<int> result = indicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << " ";
    }
}