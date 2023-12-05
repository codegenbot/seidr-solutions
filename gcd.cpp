```
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
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
    string input;
    while (getline(cin, input)) {
        istringstream iss(input);
        int a, b;
        if (!(iss >> a >> b)) {
            // Handle invalid input here
        }
        cout << gcd(a, b) << endl;
    }
    return 0;
}
```