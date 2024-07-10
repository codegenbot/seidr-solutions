#include <iostream>
#include <vector>
#include <string>
#include <cassert>

using namespace std;

string exchange(const vector<int>& lst1, const vector<int>& lst2) {
    for (int num : lst1) {
        if (num % 2 != 0) {
            return "NO";
        }
    }
    return "YES";
}

int main() {
    int n;
    cin >> n;

    vector<int> lst1(n), lst2(n);

    for (int i = 0; i < n; ++i) {
        cin >> lst1[i];
    }

    for (int i = 0; i < n; ++i) {
        cin >> lst2[i];
    }

    cout << exchange(lst1, lst2) << endl;
    
    return 0;
}