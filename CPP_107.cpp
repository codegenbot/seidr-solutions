#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result;
    int even = 0;
    int odd = 0;

    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool isPalindrome = true;

        for (int j = 0; j < str.length() / 2; j++) {
            if (str[j] != str[str.length() - j - 1]) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome && i % 2 == 0) {
            even++;
        } else if (isPalindrome && i % 2 != 0) {
            odd++;
        }
    }

    result.push_back(even);
    result.push_back(odd);

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> res = even_odd_palindrome(n);
    cout << "(" << res[0] << ", " << res[1] << ")" << endl;
    return 0;
}