#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    vector<int> a = {4, 3, 2, 8};
    vector<int> b = {};

    cout << equal(common(a, b).begin(), common(a, b).end(), b.begin()) << endl;

    return 0;
}