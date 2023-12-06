
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    while (a % b != 0) {
        a++;
    }
    cout << a << endl;
}
