#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

std::string exchange(vector<int> lst1, vector<int> lst2) {
    int oddCount = 0;
    for (int num : lst1) {
        if (num % 2 != 0)
            oddCount++;
    }
    for (int i = 0; i < lst2.size(); i++) {
        if (lst2[i] % 2 != 0 && oddCount > 0) {
            lst1.push_back(lst2[i]);
            lst2.erase(lst2.begin() + i);
            i--;
            oddCount--;
        }
    }
    return to_string(oddCount == 0);
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> lst1(n), lst2(m);
    for (int i = 0; i < n; i++) 
        cin >> lst1[i];
    for (int i = 0; i < m; i++) 
        cin >> lst2[i];  
    cout << exchange(lst1, lst2) << endl;
    return 0;
}