#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

bool common(vector<int> a, vector<int> b) {
    vector<int> result;
    for (int i = 0; i < min(a.size(), b.size()); i++) {
        if (find(a.begin(), a.end(), b[i]) != a.end()) {
            result.push_back(b[i]);
        }
    }
    return issame(a, result);
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
    cout << (issame(user_input, user_input) ? "Yes" : "No") << endl;
    return 0;
}