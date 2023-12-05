```
#include <vector>
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
    int a, b;
    while (cin >> a >> b) {
        try {
            cout << gcd(a, b) << endl;
        } catch (const std::invalid_argument& e) {
            cerr << "Error: " << e.what() << endl;
            return 1;
        }
    }
    return 0;
}
```