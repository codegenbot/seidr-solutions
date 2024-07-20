#include <vector>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    int even = 0;
    int odd = 0;
    
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        
        if (str == reverse(str)) { // Check if the number is palindrome
            if (i % 2 == 0) even++; // Count even palindromes
            else odd++; // Count odd palindromes
        }
    }
    
    result[0] = even;
    result[1] = odd;
    
    return result;
}