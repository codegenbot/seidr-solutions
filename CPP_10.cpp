#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string make_palindrome(string str);

int main() {
    string input;
    cin >> input;
    cout << make_palindrome(input) << endl;
    return 0;
}

string make_palindrome(string str){
    int n = str.length();
    string rev_str = str;
    reverse(rev_str.begin(), rev_str.end());
    string palindrome = str + rev_str.substr(1, n);
    return palindrome;
}