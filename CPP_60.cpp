#include <iostream>
using namespace std;

int sum_to_n(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;
    cin >> n;
    cout << sum_to_n(n) << endl;
    return 0;
}