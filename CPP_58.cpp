#include <iostream>
#include <set>
#include <vector>

using namespace std;

bool issame(set<int> s1, set<int> s2) {
    return (s1 == s2);
}

int checkSame() {
    int n1, n2, n3, n4, n5, n6, n7;
    cout << "Enter the first 7 numbers: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7;

    vector<int> v;
    for (int i : {n1, n2, n3, n4, n5, n6, n7}) v.push_back(i);

    bool result = issame(set<int>(v.begin(), v.end()), set<int>({n1, n2, n3}));
    if(result) {
        cout << "The sets are same." << endl;
    } else {
        cout << "The sets are not same." << endl;
    }
}

int main() {
    checkSame();
    return 0;
}