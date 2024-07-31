#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> result;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));

    result.erase(unique(result.begin(), result.end()), result.end());

    return result;
}

int main() {
   vector<int> l1 = {1, 2, 2, 3, 4, 5};
    vector<int> l2 = {2, 2, 3, 3, 4, 5, 6};

    vector<int> common = issame(l1, l2);

    for (int num : common) {
        cout << num << " ";
    }

    return 0;
}