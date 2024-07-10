```cpp
#include <iostream>
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
        auto pos = s1.find(to_string(s2[i]));
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

    assert(issame(reverse_delete("mamma", "mia"), {"", "True"}));
}