#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> unique(vector<int> l) {
    sort(l.begin(), l.end());
    l.erase(unique_copy(l.begin(), l.end()), l.end());
    return l;
}

int main() {
    vector<int> v = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> res = unique(v);
    for (auto i : res) {
        cout << i << " ";
    }
    return 0;
}