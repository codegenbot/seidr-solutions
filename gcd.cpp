#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> findIndices(string text, string target) {
    vector<int> result;
    int lastFound = -1;
    for (int i = 0; i <= text.length() - target.length(); i++) {
        if (text.substr(i, target.length()) == target) {
            result.push_back(i);
            lastFound = i;
        }
    }
    return result;
}

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << "\n";

    string text;
    string target;
    cin >> text >> target;
    vector<int> indices = findIndices(text, target);
    for (int i : indices)
        cout << i << " ";
    return 0;
}