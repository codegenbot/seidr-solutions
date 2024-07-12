#include <iostream>
#include <limits>
using namespace std;

int sum_squares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    return sum;
}

void checkNumber(int n) {
    if(n % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}

int mainFunc() {
    int n;
    cin.ignore(std::numeric_limits<int>::max(), '\n'); 
    cin >> n; 
    if (!(cin)) {
        cerr << "Invalid input. Please enter an integer." << endl;
    } else {
        checkNumber(n); 
    }
}