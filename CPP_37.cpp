#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<float> sort_even(vector<float> l) {
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) continue;
        l[i] = l[i - 1];
    }
    sort(l.begin(), l.end());
    return l;
}

int issame (vector<float> l) {
    return sort_even(l) == l;
}

int main() {
    vector<float> l = {5.5, 2.2, 3.3, 4.4, 1.1};
    assert(issame(l));
    return 0;
}