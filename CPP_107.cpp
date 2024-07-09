#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result;
    int even = 0, odd = 0;
    
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool isPalindrome = true;
        
        for (int j = 0; j < str.length(); j++) {
            if (str[j] != str[str.length() - j - 1]) {
                isPalindrome = false;
                break;
            }
        }
        
        if (isPalindrome) {
            if (i % 2 == 0) even++;
            else odd++;
        }
    }
    
    result.push_back(even);
    result.push_back(odd);
    
    return result;
}