#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int greatest = a;
    if (b > greatest) {
        greatest = b;
    }
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    cout << "The GCD is: " << greatest << endl;
    return 0;
}