#include <iostream>
#include <vector>
using namespace std;

string exchange(vector<int> lst1, vector<int> lst2) {
    bool isPossible = false;
    for (int num : lst1) {
        if (num % 2 != 0) {
            int found = false;
            for (int otherNum : lst2) {
                if (otherNum == num) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                return "NO";
            } else {
                isPossible = true;
            }
        }
    }
    return isPossible ? "YES" : "NO";
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> lst1(n), lst2(m);
    for (int i = 0; i < n; i++) {
        cin >> lst1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> lst2[i];
    }
    cout << exchange(lst1, lst2) << endl;
    return 0;
}