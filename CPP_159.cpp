#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    if (total > remaining) {
        return {total, 0};
    } else {
        return {total, remaining - need};
    }
}

int main() {
    cout << "{11, 4}" << endl; // eat(5, 6, 10)
    cout << "{12, 1}" << endl; // eat(4, 8, 9)
    cout << "{11, 0}" << endl; // eat(1, 10, 10)
    cout << "{7, 0}" << endl; // eat(2, 11, 5)

    return 0;
}