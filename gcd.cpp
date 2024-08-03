#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

vector<int> findIndicesOfSubstring(string text, string target) {
    vector<int> indices;
    size_t pos = text.find(target, 0);
    while (pos != string::npos) {
        indices.push_back(pos);
        pos = text.find(target, pos + 1);
    }
    return indices;
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << endl;

    string text, target;
    cin >> text >> target;
    vector<int> result = findIndicesOfSubstring(text, target);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}