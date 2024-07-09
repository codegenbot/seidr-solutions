```cpp
#include <iostream>
#include <set>
#include <vector>

using namespace std;

bool isSame(set<int> s1, set<int> s2) {
    return s1 == s2;
}

int main() {
    int n1, n2, n3, n4, n5, n6, n7;

    cout << "Enter the first 7 numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;

    vector<int> v;
    for (int i : {n1, n2, n3, n4, n5, n6, n7}) v.push_back(i);

    bool result = isSame(set<int>({n1, n2, n3}), set<int>(v.begin() + 3, v.end()));
    if(result) {
        cout << "The sets are same." << endl;
    } else {
        cout << "The sets are not same." << endl;
    }
}