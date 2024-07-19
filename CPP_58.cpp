#include <iostream>
#include <vector>
#include <set>

using namespace std;

bool common(vector<int> a, vector<int> b) {
    set<int> result;
    for (int i = 0; i < min(a.size(), b.size()); i++) {
        result.insert(b[i]);
    }
    return a == result;
}

int main_test() {
    int n;
    cin >> n;
    vector<int> user_input(n, 0);  

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        user_input[i] = x;  
    }
    cout << (common(user_input, user_input) ? "Yes" : "No") << endl;
    return 0;
}