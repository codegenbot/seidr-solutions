#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool pairs_sum_to_zero(vector<int> l) {
    unordered_set<int> seen;
    for (int num : l) {
        if (seen.count(-num)) return true;
        seen.insert(num);
    }
    return false;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> l(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> l[i];
    }

    if (pairs_sum_to_zero(l)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}