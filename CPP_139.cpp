
#include <iostream>
using namespace std;

long long special_factorial(int n) {
    if (n <= 0) {
        return 1;
    } else {
        return n * special_factorial(n - 1);
    }
}

int main() {
    int n;
    cin >> n;
    cout << special_factorial(n) << endl;
    return 0;
}