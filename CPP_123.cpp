#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

vector<int> get_odd_collatz(int n) {
    // Implement this function according to the problem description
}

int main() {
    int n;
    cin >> n;
    
    vector<int> result = get_odd_collatz(n);
    
    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}