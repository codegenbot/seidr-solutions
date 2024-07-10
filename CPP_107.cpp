```
#include <iostream>
#include <vector>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    int even = 0;
    int odd = 0;

    for (int i = 1; i <= n; ++i) {
        string str = to_string(i);
        bool is_palindrome = true;

        for (int j = 0; j < str.length() / 2; ++j) {
            if (str[j] != str[str.length() - j - 1]) {
                is_palindrome = false;
                break;
            }
        }

        if (is_palindrome && i % 2 == 0)
            even++;
        else if (is_palindrome && i % 2 != 0)
            odd++;

    }

    result[0] = even;
    result[1] = odd;

    return result;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    vector<int> result = even_odd_palindrome(n);

    cout << "Number of even palindromes: " << result[0] << endl;
    cout << "Number of odd palindromes: " << result[1] << endl;

    return 0;
}