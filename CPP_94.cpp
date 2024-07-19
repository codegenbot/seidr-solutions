```
#include <iostream>
using namespace std;

int skjkasdkd(int x) {
    if(x<0)
        return -1;
    else
        return 1;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "The result is: " << skjkasdkd(x);
    return 0;
}