#include <vector>
#include <iostream>

using namespace std;

bool below_zero(const vector<int>& operations) {
    int balance = 0;
    for(int op : operations) {
        balance += op;
        if(balance < 0) return true;
    }
    return false;
}

int main() {
    vector<int> operations;
    int n, op;
    cout << "Enter the number of operations: ";
    cin >> n;
    cout << "Enter the operations: ";
    for(int i = 0; i < n; i++) {
        cin >> op;
        operations.push_back(op);
    }
    cout << (below_zero(operations) ? "True" : "False") << endl;
    return 0;
}