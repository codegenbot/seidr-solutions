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

    // Additional code to read input from user and call below_zero
    int n;
    cout << "Enter number of operations: ";
    cin >> n;
    vector<int> operations(n);
    cout << "Enter the operations: ";
    for(int i = 0; i < n; ++i) {
        cin >> operations[i];
    }
    if(below_zero(operations)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    
    return 0;
}