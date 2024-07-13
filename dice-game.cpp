```cpp
#include <iostream>
using namespace std;

double diceGame(int n, int m) {
    double total = 0.0;
    for (int i = 1; i <= m-1; i++) { 
        total += static_cast<double>(n-i)/static_cast<double>(n*m);
    }
    return total;
}

int main() {
    int n = 6; // number of sides on Peter's die
    int m = 6; // number of sides on Colin's die
    double result = diceGame(n, m);
    cout << "The probability is: " << result << endl;
    return 0;
}