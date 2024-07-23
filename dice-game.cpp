```c++
#include <algorithm>
#include <iostream>
#include <initializer_list>

double diceGame(int n, int m) {
    double total = 1.0;
    double petersWin = 0.0;

    for (int i = 1; i <= std::min(m, n); i++) { 
        if(i<n && i>=1){
            petersWin += (n-i)/(double)(n*m);
        }
    }

    return petersWin;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m;

    double result = diceGame(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << "\n";
    return 0;
}