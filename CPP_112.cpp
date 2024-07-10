#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool issame(const string& a, const string& b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;
}

string reverse(const std::string& s) {
    std::string t = s;  
    std::reverse(t.begin(),t.end());
    return t;
}

string reverse_delete(const string& s1, const string& s2) {
    int len1 = s1.size();
    int len2 = s2.size();
    for(int i = 0; i < len2; i++) {
        auto pos = s1.find(s2[i]);
        if(pos != std::string::npos) {
            s1 = s1.substr(0, pos) + s1.substr(pos + 1);
        }
    }
    return reverse(s1);
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

    string s1 = to_string(num1) + to_string(num2);
    string s2 = "mama";
    string reversed = reverse_delete(s2, s1); 
    assert(issame(s1, reversed));
    return 0;
}