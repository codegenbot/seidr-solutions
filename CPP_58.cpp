#include <iostream>
#include <set>
#include <vector>
#include <utility>

using namespace std;

bool isSame(set<pair<int, int>> s1, set<pair<int, int>> s2) {
    return s1 == s2;
}

int main() {
    int n1, n2, n3, n4, n5, n6, n7;

    cout << "Enter the first 7 numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;

    vector<int> v;
    set<pair<int, int>> common;
    for (int i : {n1, n2, n3, n4, n5, n6, n7}) {
        common.insert(make_pair(i, i));  
    }

    bool result = isSame(common, common);
    if(result) {
        cout << "The sets are same." << endl;
    } else {
        cout << "The sets are not same." << endl;
    }
}