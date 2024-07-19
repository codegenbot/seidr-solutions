#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result;
    result.reserve(2); 
    int countEven = 0;
    int countOdd = 0;

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
                countEven++;
            else
                countOdd++;
        }
    }

    result.push_back(countEven);
    result.push_back(countOdd);

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> output = even_odd_palindrome(n);
    cout << "Count of Even Palindromes: " << output[0] << endl;
    cout << "Count of Odd Palindromes: " << output[1] << endl;

    return 0;