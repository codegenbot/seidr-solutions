#include <iostream>
using namespace std;

void checkNumber(int n) {
    if(n % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}

int sum_squares(const vector<int>& nums) { 
    int total = 0;
    for (int num : nums) {
        total += num * num;
    }
    return total;
}

int main() {
    int n;
    cin >> n; 
    if (!(cin)) {
        cerr << "Invalid input. Please enter an integer." << endl;
    } else {
        checkNumber(n); 
    }
}