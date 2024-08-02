#include <iostream>

using namespace std;

int starts_one_ends(int n) {
    int count = 0;
    for (long long i = 1; i <= n; i++) {
        string s = to_string(i);
        if ((s.size() == n && s[0] == '1') || (s.size() == n && s.back() == '1')) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << starts_one_ends(n) << endl;
    return 0;
}