#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result;
    int count_even = 0, count_odd = 0;
    
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool is_palindrome = true;
        
        for (int j = 0; j < str.length() / 2; j++) {
            if (str[j] != str[str.length() - j - 1]) {
                is_palindrome = false;
                break;
            }
        }
        
        if (is_palindrome) {
            if (i % 2 == 0) count_even++;
            else count_odd++;
        }
    }
    
    result.push_back(count_even);
    result.push_back(count_odd);
    
    return result;
}