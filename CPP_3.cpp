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
    vector<int> operations;
    int n, op;
    cout << "Enter number of operations: ";
    cin >> n;
    cout << "Enter the operations: ";
    while (n--) {
        cin >> op;
        operations.push_back(op);
    }
    bool result = below_zero(operations);
    cout << (result ? "YES" : "NO") << endl;
    return 0;
}