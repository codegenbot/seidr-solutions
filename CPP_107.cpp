#include <iostream>
#include <vector>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    int count_even_pal = 0;
    int count_odd_pal = 0;
    
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool is_palindrome = true;
        
        for (int j = 0; j < str.length(); j++) {
            if (str[j] != str[str.length() - 1 - j]) {
                is_palindrome = false;
                break;
            }
        }
        
        if (is_palindrome) {
            if (i % 2 == 0)
                count_even_pal++;
            else
                count_odd_pal++;
        } 
        // non-palindrome number
        else {
            if (i % 2 == 0)
                result[0]++;
            else
                result[1]++;
        }
    }
    
    result[0] = count_even_pal;
    result[1] = count_odd_pal;
    
    return result;
}