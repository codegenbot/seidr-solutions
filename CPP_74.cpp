```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

bool same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> match(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }

    if (!lst1.size() && !lst2.size()) return {};

    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;
    else {
        if (same(lst1, lst2)) return lst1;
        else return lst2;
    }
}

int main() {
    int n1, n2;
    cout << "Enter the number of strings for list 1: ";
    cin >> n1;
    vector<string> lst1;
    cout << "Enter string " << n1 << " for list 1:\n";
    for (int i = 0; i < n1; i++) {
        string s;
        while (!(cin >> s) || s.empty()) {
            cout << "Invalid input. Please enter a non-empty string.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please try again: ";
            getline(cin, s);
        }
        lst1.push_back(s);
    }

    cout << "Enter the number of strings for list 2: ";
    cin >> n2;
    vector<string> lst2;
    cout << "Enter string " << n2 << " for list 2:\n";
    for (int i = 0; i < n2; i++) {
        string s;
        while (!(cin >> s) || s.empty()) {
            cout << "Invalid input. Please enter a non-empty string.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Please try again: ";
            getline(cin, s);
        }
        lst2.push_back(s);
    }

    if (same(lst1, lst2)) {
        cout << "The lists are the same.\n";
    } else {
        vector<string> result = match(lst1, lst2);
        if (equal(result.begin(), result.end(), lst1.begin())) {
            cout << "List 1 is the match of list 2.\n";
        } else {
            cout << "List 2 is the match of list 1.\n";
        }
    }

    return 0;
}