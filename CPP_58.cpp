#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    for (int i : l1) {
        if (s2.find(i) != s2.end()) {
            result.push_back(i);
        }
    }

    sort(result.begin(), result.end());
    return result;
}

int main() {
    vector<int> l1 = {1, 4, 3, 34, 653, 2, 5};
    vector<int> l2 = {5, 7, 1, 5, 9, 653, 121};

    vector<int> result = common(l1, l2);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}