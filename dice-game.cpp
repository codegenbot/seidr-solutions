```c++
#include <iostream>
#include <cmath>

double getProbability(int n, int m) {
    double num = 0;
    for(int i=m+1; i<=n; ++i){
        num += (double)1/(n*m);
    }
    return num;
}

int main() {
    int n = 6; // Number of sides on Peter's die
    int m = 6; // Number of sides on Colin's die
    double probability = getProbability(n, m);
    std::cout << "The probability is: " << probability << std::endl;
    return 0;
}