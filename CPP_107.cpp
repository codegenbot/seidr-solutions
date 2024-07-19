```cpp
#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(n+1, 0);

    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool isPalindrome = true;

        for (int j = 0; j < str.length() / 2; j++) {
            if (str[j] != str[str.length() - j - 1]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome) {
            if (i % 2 == 0)
                result[i] = 1;
            else
                result[i] = 2;
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> output = even_odd_palindrome(n);
    for(int i=1; i<=n; i++) {
        if(output[i] == 1)
            cout << "Count of Even Palindromes: " << output[i] << endl;
        else if(output[i] == 2)
            cout << "Count of Odd Palindromes: " << output[i] << endl;
    }

    return 0;
}