#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2, 0);
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        bool is_palindrome = true;
        for (int j = 0; j < str.length() / 2; j++) {
            if (str[j] != str[str.length() - 1 - j]) {
                is_palindrome = false;
                break;
            }
        }
        if (is_palindrome) {
            if (i % 2 == 0)
                result[0]++;
            else
                result[1]++;
        }
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> result = even_odd_palindrome(n);
    cout << "Even: " << result[0] << ", Odd: " << result[1] << endl;
    return 0;
}