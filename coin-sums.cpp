#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n % 5 << endl;
    cout << (n % 5) / 2 << endl;
    cout << (n % 5) % 2 << endl;
    cout << n / 5 << endl;
    return 0;
}