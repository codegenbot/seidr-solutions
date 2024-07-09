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
    int n1, n2, n3, n4, n5, n6, n7;

    cout << "Enter the first 3 numbers: ";
    cin >> n1 >> n2 >> n3;
    vector<int> l1;
    for (int i : {n1, n2, n3}) l1.push_back(i);

    cout << "Enter the next 4 numbers: ";
    cin >> n4 >> n5 >> n6 >> n7;
    vector<int> v2;
    for (int i : {n4, n5, n6, n7}) v2.push_back(i);

    bool result = issame(l1, v2);
    if(result) {
        cout << "The sets are same." << endl;
    } else {
        cout << "The sets are not same." << endl;
    }
    return 0;
}