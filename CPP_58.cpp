#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    vector<int> result;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));

    return result;
}

int main() {
    vector<int> l1 = {1, 2, 3, 4, 5};
    vector<int> l2 = {1, 3, 5, 7, 9};

    vector<int> res = issame(l1, l2);

    if (res == vector<int>()) {
        cout << "No common elements found" << endl;
    } else {
        for (int num : res) {
            cout << num << " ";
        }
    }

    return 0;
}