#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n % 5 << endl;
    n /= 5;
    cout << n % 5 << endl;
    n /= 5;
    cout << n % 5 << endl;
    n /= 5;
    cout << n << endl;
    return 0;
}