#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

bool below_zero(vector<int> operations) {
    int balance = 0;
    for(int op : operations) {
        balance += op;
        if(balance < 0) return true;
    }
    return false;
}

int main() {
    vector<int> ops;
    int n;
    cout << "Enter the number of operations: ";
    cin >> n;
    ops.resize(n);
    cout << "Enter the operations: ";
    for(int i = 0; i < n; ++i) {
        cin >> ops[i];
    }
    
    bool result = below_zero(ops);
    cout << (result ? "True" : "False") << endl;
    return 0;
}