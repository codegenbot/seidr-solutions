#include <iostream>
#include <vector>
#include <algorithm>

string exchange(vector<int> lst1, vector<int> lst2) {
    int sum = 0;
    for (int num : lst2) {
        if (num % 2 != 0) {
            return "NO";
        }
        sum += num;
    }

    if(sum%4!=0){
        return "NO";
    }

    for (int i = 0; i < lst1.size(); i++) {
        if (std::find(lst2.begin(), lst2.end(), lst1[i]) == lst2.end()) {
            return "NO";
        }
    }

    return "YES";
}

int main() {
    vector<int> lst1;
    vector<int> lst2;

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        lst1.push_back(num);
    }

    for (int i = 0; i < m; i++) {
        int num;
        cin >> num;
        lst2.push_back(num);
    }

    cout << exchange(lst1, lst2) << endl;

    return 0;
}