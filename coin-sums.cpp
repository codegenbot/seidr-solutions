#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n % 5 << endl;
    cout << (n % 25) / 5 << endl;
    cout << (n % 100) / 25 << endl;
    cout << n / 100 << endl;
    return 0;
}