#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

float median(vector<float> l) {
    sort(l.begin(), l.end());
    int n = l.size();
    if (n % 2 == 0) {
        return (l[n / 2 - 1] + l[n / 2]) / 2.0;
    } else {
        return l[n / 2];
    }
}

int main() {
    vector<float> v = {3, 1, 2, 4, 5};
    cout << median(v) << endl;

    v = {-10, 4, 6, 1000, 10, 20};
    cout << median(v) << endl;

    return 0;
}