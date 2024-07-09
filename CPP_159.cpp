#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    if (total > remaining) {
        return {total, 0};
    } else {
        return {(int)remaining - (total - need), remaining};
    }
}

int main() {
    cout << "{ " << eat(5, 6, 10).at(0) << ", " << eat(5, 6, 10).at(1) << " }";
    cout << endl;
    cout << "{ " << eat(4, 8, 9).at(0) << ", " << eat(4, 8, 9).at(1) << " }";
    cout << endl;
    cout << "{ " << eat(1, 10, 10).at(0) << ", " << eat(1, 10, 10).at(1) << " }";
    cout << endl;
    cout << "{ " << eat(2, 11, 5).at(0) << ", " << eat(2, 11, 5).at(1) << " }";
    return 0;
}