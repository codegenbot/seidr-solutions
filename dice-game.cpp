```cpp
#include <iostream>
#include <cmath>

double diceGame(int n, int m) {
    double total = (n * m);
    double win = (n - m) * (n > m ? 1 : 0) + ((n == m) ? 0.5 : 0);
    return win / total;
}

int main() { 
    return diceGame(6, 6); 
}