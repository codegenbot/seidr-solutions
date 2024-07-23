#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    int countEven = 0;
    int countOdd = 0;

    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool isPalindrome = true;

        for (int j = 0; j < str.length(); j++) {
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

    result[0] = countEven;
    result[1] = countOdd;

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> result = even_odd_palindrome(n);
    cout << "Number of even palindromes: " << result[0] << endl;
    cout << "Number of odd palindromes: " << result[1] << endl;

    return 0;
}