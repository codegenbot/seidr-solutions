#include <vector>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool isPalindrom = true;
        
        for (int j = 0; j < str.length(); j++) {
            if (str[j] != str[str.length() - j - 1]) {
                isPalindrom = false;
                break;
            }
        }
        
        if (isPalindrom && i % 2 == 0) {
            result[0]++;
        } else if (isPalindrom && i % 2 != 0) {
            result[1]++;
        }
    }
    
    return result;
}