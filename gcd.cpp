```cpp
#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

vector<size_t> indicesOfSubstring(const string& text, const string& target) {
    vector<size_t> indices;
    size_t pos = 0;
    while ((pos = text.find(target, pos)) != string::npos) {
        indices.push_back(pos);
        pos += target.length(); // increment by the length of the target
    }
    return indices;
}

int main() {
    string text, target;
    cout << "Enter the text: ";
    getline(cin, text);
    cout << "Enter the target: ";
    cin >> target;

    vector<size_t> indices = indicesOfSubstring(text, target);

    int max_gcd = 1;
    for (int i = 1; i < indices.size(); i++) {
        max_gcd = gcd(max_gcd, indices[i]);
    }
    cout << "Indices: ";
    for (size_t i : indices) {
        cout << i << " ";
    }
    cout << endl;
    cout << "GCD of indices: " << max_gcd << endl;

    return 0;
}