#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

float median(vector<float> l) {
    sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0) {
        return (l[n / 2 - 1] + l[n / 2]) / 2;
    } else {
        return l[n / 2];
    }
}

int main() {
    vector<float> l1 = {3, 1, 2, 4, 5};
    vector<float> l2;
    l2 = {-10, 4, 6, 1000, 10, 20};

    cout << median(l1) << endl;
    cout << median(l2) << endl;

    assert(abs(median({8, 1, 3, 9, 9, 2, 7}) - 7) < 1e-4 );

    return 0;
}