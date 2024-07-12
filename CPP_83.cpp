#include <iostream>
using namespace std;

int starts_one_ends(int n);  

int main() -> int {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    if (n > 0) {
        cout << "The count of the numbers that start or end with 1 is: " << starts_one_ends(n) << endl;
    } else {
        cout << "Invalid input. Please enter a positive integer." << endl;
    }
    return 0;
}

int starts_one_ends(int n) { 
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 10 == 1 || i % 100 == 11 || i % 1000 == 111) {
            count++;
        }
    }
    return count;
}