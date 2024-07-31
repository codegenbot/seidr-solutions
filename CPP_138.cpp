#include <iostream>
using namespace std;

bool is_equal_to_sum_even(int n) {
    return (n % 8 == 0);
}

int main() {
    int n;
    cin >> n;
    cout << (is_equal_to_sum_even(n) ? "true" : "false") << endl;
    return 0;
}