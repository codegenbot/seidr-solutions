#include <vector>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2, 0);
    
    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        
        if (str == reverse(str).str()) { // check if the number is a palindrome
            if (i % 2 == 0) result[0]++;  // increment even count
            else result[1]++;           // increment odd count
        }
    }
    
    return result;
}