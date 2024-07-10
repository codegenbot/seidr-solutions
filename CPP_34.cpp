#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result(l.begin(), unique(l.begin(), l.end()).end());
    sort(result.begin(), result.end());
    return unique(result.begin(), result.end());
}

int main() {
    vector<int> v = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> res = unique(v);
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}