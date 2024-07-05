#include <iostream>
using namespace std;

bool iscuber(int a) {
    for (int i = 1; i * i * i <= a; ++i) {
        if (i * i * i == a) {
            return true;
        }
    }
    return false;
}

int main() {
    int a;
    cin >> a;
    if (iscuber(a)) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }
    return 0;
}