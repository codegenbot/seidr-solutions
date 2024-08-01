#include <stdio.h>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    int even = 0;
    int odd = 0;
    
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        if (str == reverse(str).s) { // check if the number is palindrome
            if (i % 2 == 0) even++; // increment even count if it's even
            else odd++; // increment odd count if it's odd
        }
    }
    
    return vector<int>{even, odd};
}