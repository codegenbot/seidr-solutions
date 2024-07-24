#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> unique(vector<int> l) {
    vector<int> result;
    auto resultEnd = unique_copy(l.begin(), l.end(), back_inserter(result));
    sort(result.begin(), resultEnd);
    return result;
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    vector<int> result = unique(l);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}