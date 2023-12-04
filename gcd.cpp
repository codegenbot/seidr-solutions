#include <iostream>
#include <string>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> result;
    for (int i = 0; i < text.size() - target.size() + 1; ++i) {
        if (text.substr(i, target.size()) == target) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    string line;
    while (getline(cin, line)) {
        int a = stoi(line.substr(0, line.find(" ")));
        int b = stoi(line.substr(line.find(" ") + 1));
        cout << gcd(a, b) << endl;
    }
    return 0;
}