#include <iostream>
using namespace std;

int sum_squares(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i] * arr[i];
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

int main() {
    int n;
    cin >> n; 
    checkNumber(n); 
}