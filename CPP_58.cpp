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

int main() {
    int n;
    cin >> n;
    vector<int> user_input;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (!issame(user_input, vector<int>{x})) {
            user_input.push_back(x);
        }
    }
    cout << (issame(user_input, vector<int>()) ? "Yes" : "No") << endl;
}