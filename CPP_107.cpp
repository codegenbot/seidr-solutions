#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool isPalindrome = true;
        int left = 0, right = str.length() - 1;
        while (left < right) {
            if (str[left] != str[right]) {
                isPalindrome = false;
                break;
            }
            left++;
            right--;
        }
        if (isPalindrome && i % 2 == 0) {
            result[0]++;
        } else if (isPalindrome) {
            result[1]++;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> res = even_odd_palindrome(n);
    cout << "Number of even palindromes: " << res[0] << endl;
    cout << "Number of odd palindromes: " << res[1] << endl;
    return 0;
}