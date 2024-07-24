```cpp
#include <iostream>
#include <cmath>

double getProbability(int n, int m) {
    double num = 0;
    for(int i=m+1; i<=n; ++i){
        num += (double)1/(m*i);
    }
    return num;
}

int main() {
    return 0;
}