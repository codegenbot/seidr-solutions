#include <iostream>
#include <vector>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    int total = number + need;
    if (total > remaining) {
        total -= (total - remaining);
    }
    result.push_back(total);
    result.push_back(remaining - need);
    return result;
}

int main() {
    cout << "eat(5, 6, 10) -> " << eat(5, 6, 10)[0] << ", " << eat(5, 6, 10)[1] << endl;
    cout << "eat(4, 8, 9) -> " << eat(4, 8, 9)[0] << ", " << eat(4, 8, 9)[1] << endl;
    cout << "eat(1, 10, 10) -> " << eat(1, 10, 10)[0] << ", " << eat(1, 10, 10)[1] << endl;
    cout << "eat(2, 11, 5) -> " << eat(2, 11, 5)[0] << ", " << eat(2, 11, 5)[1] << endl;
    return 0;
}