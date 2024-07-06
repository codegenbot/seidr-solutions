#include <iostream>
#include <vector>
#include <string>
using namespace std;

string rev(string s) {
    string rev_str = "";
    
    for (int i = s.length() - 1; i >= 0; i--) {
        rev_str += s[i];
    }
    
    return rev_str;
}

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    int count_even = 0;
    int count_odd = 0;
    
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        
        if (str == rev(str)) {
            if (i % 2 == 0) {
                count_even++;
            } else {
                count_odd++;
            }
        }
    }
    
    result[0] = count_even;
    result[1] = count_odd;
    
    return result;
}