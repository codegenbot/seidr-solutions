#include <iostream>
#include <limits>
using namespace std;

void checkNumber(int n) {
    if(n % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}

int main() {
    int n;
    cin >> n; 
    while (!(cin)) {
        cerr << "Invalid input. Please enter an integer." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> n; 
    }
    checkNumber(n); 
}