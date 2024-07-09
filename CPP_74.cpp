#include <vector>
#include <string>
#include <iostream>

using namespace std;

bool same(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<string> totalMatch(vector<string> lst1, vector<string> lst2) {
    int sum1 = 0;
    for (const string& s : lst1) {
        sum1 += s.length();
    }
    int sum2 = 0;
    for (const string& s : lst2) {
        sum2 += s.length();
    }

    if (sum1 < sum2) return lst1;
    else if (sum1 > sum2) return lst2;

    if (same(lst1, lst2)) {
        return lst1;
    }
    else if (!lst1.empty()) {
        for (const string& s : lst2) {
            bool found = false;
            for (const string& t : lst1) {
                if (s == t) {
                    found = true;
                    break;
                }
            }
            if (!found) return lst1;
        }
    } else {
        for (const string& s : lst2) {
            bool found = false;
            for (const string& t : lst1) {
                if (s == t) {
                    found = true;
                    break;
                }
            }
            if (!found) return lst2;
        }
    }

    return {};
}

int main() {  
    vector<string> lst1;
    cout << "Enter the strings for list 1, separated by spaces: ";
    string input;
    getline(cin, input);
    size_t pos = 0;
    while ((pos = input.find(" ")) != string::npos) {
        string s = input.substr(0, pos);
        lst1.push_back(s);
        input.erase(0, pos + 1);
    }
    if (!input.empty()) {
        lst1.push_back(input);
    }

    vector<string> lst2;
    cout << "Enter the strings for list 2, separated by spaces: ";
    getline(cin, input);
    pos = 0;
    while ((pos = input.find(" ")) != string::npos) {
        string s = input.substr(0, pos);
        lst2.push_back(s);
        input.erase(0, pos + 1);
    }
    if (!input.empty()) {
        lst2.push_back(input);
    }

    vector<string> result = totalMatch(lst1, lst2);
    cout << "Result: ";
    for (const string& s : result) {
        cout << s << " ";
    }
    cout << endl;
    return 0; 
}