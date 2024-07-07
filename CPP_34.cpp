#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> res(unique_copy(v.begin(), v.end(), back_inserter(res)));
    sort(res.begin(), res.end());
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}