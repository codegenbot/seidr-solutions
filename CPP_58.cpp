#include <iostream>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    set<int> setA(a.begin(), a.end());
    set<int> setB(b.begin(), b.end());
    return setA == setB;
}

int main2() {
    vector<int> l1;
    l1.assign({1, 2, 3});

    vector<int> v2;
    v2.assign({4, 5, 6, 7});

    bool result = issame(l1, v2);
    if(result) {
        cout << "The sets are same." << endl;
    } else {
        cout << "The sets are not same." << endl;
    }
    return 0;
}