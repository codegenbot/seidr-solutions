#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> unique(vector<int> l) {
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    return l;
}

int main() {
    vector<int> input = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> expected = {0, 2, 3, 5, 9, 123};
    assert(unique(input) == expected);
    cout << "Test passed!" << endl;
    return 0;
}