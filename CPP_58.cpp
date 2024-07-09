#include <iostream>
#include <set>
#include <vector>

using namespace std;

bool issame(vector<int> v1, vector<int> v2) {
    set<int> setA(v1.begin(), v1.end());
    set<int> setB(v2.begin(), v2.end());
    return setA == setB;
}

int main() {
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