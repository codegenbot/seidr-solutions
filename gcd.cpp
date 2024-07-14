#include <iostream>
#include <vector>
#include <algorithm>
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

    vector<int> indices = indicesOfSubstring(text, target);

    if(indices.size() > 1) {
        int min_index = *min_element(indices.begin(), indices.end());
        int max_index = *max_element(indices.begin(), indices.end());
        cout << "GCD of indices: " << gcd(min_index, max_index) << endl;
    } else if(indices.empty()) {
        cout << "GCD of indices: 0" << endl;
    } else {
        cout << "GCD of indices: " << *min_element(indices.begin(), indices.end()) << endl;
    }

    cout << "Indices: ";
    for (int i : indices) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}