#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    int count_even = 0;
    int count_odd = 0;

    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool is_palindrome = true;
        for (int j = 0; j < str.length() / 2; j++) {
            if (str[j] != str[str.length() - j - 1]) {
                is_palindrome = false;
                break;
            }
        }

        if (is_palindrome) {
            if (i % 2 == 0)
                count_even++;
            else
                count_odd++;
        }
    }

    result[0] = count_even;
    result[1] = count_odd;

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