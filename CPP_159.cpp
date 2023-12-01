#include <iostream>
#include <vector>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    number += need;
    remaining -= need;
    if (remaining < 0) {
        number += remaining;
        remaining = 0;
    }
    vector<int> result = {number, remaining};
    return result;
}

int main() {
    if (eat(4, 5, 1) == vector<int>{5, 0}) {
        cout << "Test case passed!" << endl;
    } else {
        cout << "Test case failed!" << endl;
    }
    return 0;
}