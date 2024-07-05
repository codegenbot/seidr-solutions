#include <iostream>
using namespace std;

bool is_equal_to_sum_even(int n) {
    return n > 0 && n % 2 == 0 && n >= 8;
}

int main() {
    int n;
    cin >> n;
    if (is_equal_to_sum_even(n)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}