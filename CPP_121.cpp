#include <iostream>
#include <cassert>

using namespace std;

int calculate_sum(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (i % 2 == 0 && lst[i] % 2 != 0) {
            sum += lst[i];
        }
    }
    return sum;
}

int main() {
    assert(calculate_sum({3, 13, 2, 9}) == 3);
    cout << calculate_sum({1, 4, 5, 10}) << endl;
    return 0;
}