```cpp
#include <iostream>
#include <set>
#include <vector>

using namespace std;

bool issame(vector<int> v1, vector<int> v2) {
    set<int> setA(v1.begin(), v1.end());
    set<int> setB(v2.begin(), v2.end());
    return setA == setB;
}

int main {
    int n1, n2, n3, n4, n5, n6, n7;

    cout << "Enter the first 7 numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;

    vector<int> v;
    for (int i : {n1, n2, n3, n4, n5, n6, n7}) v.push_back(i);

    bool result = issame({n1, n2, n3}, vector<int>(v.begin() + 3, v.end()));
    if(result) {
        cout << "The sets are same." << endl;
    } else {
        cout << "The sets are not same." << endl;
    }
}