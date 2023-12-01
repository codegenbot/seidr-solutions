#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isPalindrome(int num) {
    string str = to_string(num);
    int start = 0;
    int end = str.length() - 1;
    
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    
    return true;
}

vector<int> even_odd_palindrome(int n) {
    int evenCount = 0;
    int oddCount = 0;
    
    for (int i = 1; i <= n; i++) {
        if (isPalindrome(i)) {
            if (i % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
    }
    
    return {evenCount, oddCount};
}

int main() {
    int n;
    cin >> n;
    
    vector<int> result = even_odd_palindrome(n);
    cout << "(" << result[0] << ", " << result[1] << ")" << endl;
    
    return 0;
}