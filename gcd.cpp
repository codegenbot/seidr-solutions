#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    size_t n = text.size();
    size_t m = target.size();

    for (size_t i = 0; i < n; ++i) {
        bool found = true;
        for (size_t j = 0; j < m; ++j) {
            if (i + j >= n || text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(static_cast<int>(i));
        }
    }

    return indices;
}

int main() {
    int a, b;
    if (!(cin >> a >> b)) {
        cerr << "Invalid input for integers." << endl;
        return 1;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Consume newline character

    string text, target;
    if (!getline(cin, text) || !getline(cin, target)) {
        cerr << "Invalid input for strings." << endl;
        return 1;
    }

    vector<int> result = indicesOfSubstring(text, target);

    for (int idx : result) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}