#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

bool same_chars(string s0, string s1){
    unordered_set<char> set0(s0.begin(), s0.end());
    unordered_set<char> set1(s1.begin(), s1.end());
    return set0 == set1;
}

int main() {
    string s0, s1;
    cout << "Enter first string: ";
    cin >> s0;
    cout << "Enter second string: ";
    cin >> s1;
    
    if(same_chars(s0, s1)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    
    return 0;
}