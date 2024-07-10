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
    string result;
    for(int i = 0; i < s1.length(); i++) {
        bool found = false;
        for(int j = 0; j < s2.length(); j++) {
            if(s1[i] == s2[j]) {
                found = true;
                break;
            }
        }
        if(!found) {
            result += s1[i];
        }
    }
    return result;
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