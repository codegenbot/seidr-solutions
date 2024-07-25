#include <iostream>
#include <vector>
using namespace std;

vector<int> even_odd_palindrome(int n) {
    vector<int> result(2);
    for (int i = 1; i <= n; i++) {
        string str = to_string(i);
        if (str == reverse(str).str()) {
            if (i % 2 == 0) {
                result[0]++;
            } else {
                result[1]++;
            }
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