#include <string>
#include <algorithm>

using namespace std;

string circular_shift(int x, int shift) {
    string num_str = to_string(x);
    int n = num_str.size();
    shift %= n;
    if (shift == 0) {
        return num_str;
    }
    if (shift > n / 2) {
        reverse(num_str.begin(), num_str.end());
    } else {
        rotate(num_str.rbegin(), num_str.rbegin() + shift, num_str.rend());
    }
    return num_str;
}

int main() {
    // Example test case
    assert(circular_shift(11, 101) == "11");

    int x, shift;
    cin >> x >> shift;
    cout << circular_shift(x, shift) << endl;

    return 0;
}