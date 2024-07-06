```cpp
#include<vector>
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
    int n1, m1, n2, m2;
    cin >> n1 >> m1 >> n2 >> m2;

    vector<int> lst1(n1);
    for (auto& x : lst1) cin >> x;

    vector<int> lst2(m2);
    for (auto& x : lst2) cin >> x;

    cout << exchange(lst1, lst2) << endl;
    return 0;
}