#include <iostream>
#include <vector>
#include <cassert>

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
    assert(below_zero({1, -2, 2, -2, 5, -5, 4, -4}) == true);
    vector<int> operations;
    int n, op;
    cout << "Enter the number of operations: ";
    cin >> n;
    cout << "Enter the operations: ";
    for (int i = 0; i < n; ++i) {
        cin >> op;
        operations.push_back(op);
    }
    if (below_zero(operations)) {
        cout << "Balance drops below zero at some point." << endl;
    } else {
        cout << "Balance never drops below zero." << endl;
    }
    return 0;
}