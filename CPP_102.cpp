#include <iostream>

using namespace std;

int choose_num(int x, int y) {
    for (int i = x; i <= y; ++i) {
        if (i % 2 == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int x, y;
    cout << "Enter two positive numbers: ";
    cin >> x >> y;

    int result = choose_num(x, y);
    if (result == -1) {
        cout << "No even number in the range." << endl;
    } else {
        cout << "The biggest even integer is: " << result << endl;
    }

    return 0;
}