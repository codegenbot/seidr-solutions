#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

string reverse_delete(string s1, string s2) {
    int len1 = s1.length();
    int len2 = s2.length();
    for(int i = 0; i < len2; i++) {
        auto pos = s1.find(tolower(s2.substr(i, 1)));
        if(pos != string::npos) {
            s1.erase(pos, 1);
        }
    }
    return s1;
}

int main() {
    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    if(num1 > num2)
        cout << "First number is greater." << endl;
    else
        cout << "Second number is greater." << endl;

    string output = reverse_delete("mamma", "mia");
    vector<string> result = {"", to_string(issame({output}, {"", output}) ? 1 : 0)};
    for(string s: result) {
        cout << s << endl;
    }

    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
}