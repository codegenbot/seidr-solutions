```c
#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = 0;
    
    for (int i = 1; i <= n - 1; i++) { 
        for (int j = 1; j <= m && j < i; j++) { 
            total += 1.0 / (n * m); // add the probability when Peter's roll is greater than Colin's
        }
    }
    
    return total;
}

int main() {
    int n = 0; // input from user
    int m = 0; // input from user

    // read input from user
    cin >> n >> m;

    double result = diceGame(n, m);

    cout << "The probability that Peter rolls strictly higher than Colin is: " << result << endl;
    
    return 0;
}