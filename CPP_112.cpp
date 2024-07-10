```cpp
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>
using namespace std;

bool issame(string a, string b) {
    if(a.length() != b.length())
        return false;
    for(int i = 0; i < a.length(); i++) {
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
        if(pos != std::string::npos) {
            s1 = s1.substr(0, pos) + s1.substr(pos + 1);
        }
    }
    string reversed = s1; 
    reverse(reversed.begin(),reversed.end());
    return reversed;
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

    assert(issame(to_string(reverse_delete("mama", "ma")), reverse_delete("mama", "ma")));
    return 0;
}