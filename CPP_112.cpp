```cpp
#include <iostream>
#include <vector>
#include <string>
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

string to_string(char c) {
    ostringstream oss;
    oss << c;
    return oss.str();
}
string to_string(int i) {
    ostringstream oss;
    oss << i;
    return oss.str();
}

string reverse_delete(string s1, string s2) {
    int len1 = s1.length();
    int len2 = s2.length();
    for(int i = 0; i < len2; i++) {
        auto pos = s1.find(s2[i]);
        if(pos != string::npos) {
            s1 = s1.substr(0, pos) + s1.substr(pos + 1);
        }
    }
    reverse(s1.begin(), s1.end());
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

    assert(issame(vector<char>(reverse_delete("mama", "ma").begin(), reverse_delete("mama", "ma").end()),
              vector<char>("ammaaii".begin(), "ammaaii".end())));
    return 0;
}