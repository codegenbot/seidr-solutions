```c++
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos += 1; // to avoid duplicate matches
    }
    return indices;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    cin >> target;

    vector<int> indices = indicesOfSubstring(text, target);
    int max_gcd = 0;
    for (int i = 0; i < indices.size(); i++) {
        int g = gcd(indices[i], max_gcd);
        if (g > max_gcd) {
            max_gcd = g;
        }
    }
    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;
    cout << "GCD of indices: " << max_gcd << endl;

    return 0;
}