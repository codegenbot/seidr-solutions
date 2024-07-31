#include <vector>
#include <iostream>

using namespace std;

int solve(vector<int> lst) {
    int sum = 0;
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] % 2 != 0 && lst[i] != 0) { 
            sum += lst[i];
        }
    }
    
    return sum;
}

int main() {
    vector<int> lst;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        lst.push_back(x);
    }
    if (lst.empty()) {
        cout << "Error: Input list is empty." << endl;
    } else {
        cout << solve(lst) << endl;
    }
    return 0;
}