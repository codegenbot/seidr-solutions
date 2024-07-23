```cpp
#include <vector>
#include <string>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    int even = 0;
    int odd = 0;
    
    for (int i = 1; i <= n; i++) {
        string str = std::to_string(i);
        bool isPalindrome = true;
        
        for (int j = 0; j < str.length(); j++) { 
            if (str[j] != str[str.length() - j - 1]) { 
                isPalindrome = false;
                break;
            }
        }
        
        if (isPalindrome) {
            if (i % 2 == 0)
                even++;
            else
                odd++;
        }
    }
    
    result[0] = even;
    result[1] = odd;
    
    return result;
}