#include<iostream>
#include<string>
using namespace std;

bool is_palindrome(string str){
    string s(str.rbegin(),str.rend());
    return s==str;
}

string make_palindrome(string str){
    int n = str.length();
    for (int i = n; i >= 0; --i) {
        if (is_palindrome(str.substr(0, i))) {
            string suffix = str.substr(i);
            reverse(suffix.begin(), suffix.end());
            return str + suffix;
        }
    }
    return str; // This line should never be reached
}

int main() {
    string input;
    cin >> input;
    cout << make_palindrome(input) << endl;
    return 0;
}