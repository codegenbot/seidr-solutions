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
    vector<int> lst1, lst2;
    int n;
    cin >> n;
    
    // Read elements for lst1
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        lst1.push_back(val);
    }
    
    // Read elements for lst2
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        lst2.push_back(val);
    }
    
    cout << exchange(lst1, lst2) << endl;
    
    return 0;
}