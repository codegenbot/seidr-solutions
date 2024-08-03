#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

vector<int> indicesOfSubstring(const string& text, const string& target) {
    vector<int> indices;
    int n = text.size();
    int m = target.size();
    for (int i = 0; i <= n - m; ++i) {
        bool found = true;
        for (int j = 0; j < m; ++j) {
            if (text[i + j] != target[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            indices.push_back(i);
        }
    }
    return indices;
}

int main() {
    int choice;
    cout << "Enter 1 to find GCD or 2 to find indices of substrings: ";
    cin >> choice;
    
    if (choice == 1) {
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        cout << "GCD: " << gcd(a, b) << endl;
    }
    else if (choice == 2) {
        string text, target;
        cout << "Enter text: ";
        cin >> text;
        cout << "Enter target: ";
        cin >> target;
        vector<int> result = indicesOfSubstring(text, target);
        cout << "Indices of Substring:";
        for (int idx : result) {
            cout << " " << idx;
        }
        cout << endl;
    }
    
    return 0;
}