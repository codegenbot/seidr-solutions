#include <iostream>
using namespace std;

int sum_squares(int arr[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += arr[i] * arr[i];
    }
    return total;
}

int check_even_odd() { 
    int n;
    cin >> n;
    if(n % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
    
    assert(sum_squares({-1,1,0})==2); 
}

int main() { 
    check_even_odd(); 
}