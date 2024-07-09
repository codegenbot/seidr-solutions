#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

bool issame(const string& a, const vector<string>& b, const string& s) {
    istringstream iss(s);
    string t;
    while (getline(iss, t, ',')) {
        for (const auto& str : split(t, '(')) {
            if (!issame(a, vector<string>{str}, ")")) return false;
        }
    }
    return true;
}

vector<string> split(const string& s, char c) {
    vector<string> res;
    stringstream ss(s);
    string t;
    while (getline(ss, t, c)) {
        res.push_back(t);
    }
    return res;
}

string separate_paren_groups(string s) {
    int count = 0;
    string current_group = "";
    string result = "";

    for (char c : s) {
        if (c == '(') {
            count++;
            current_group += c;
        } else if (c == ')') {
            count--;
            current_group += c;
            if (count == 0) {
                result += current_group; // append the entire group string
                current_group = "";
            }
        } else {
            if (count > 0) {
                current_group += c;
            } else {
                result += c;
            }
        }
    }

    return result;
}

int main() {
    string s;

    while (true) {
        cout << "Enter a string: ";
        if (!(cin >> s)) { 
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            break; 
        }
    }

    assert(issame(separate_paren_groups("( ) (( )) (( )( )"), {"", "(())", "(()())"}));

    cout << "Result: " << separate_paren_groups(s) << endl;
    return 0;
}