```cpp
#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    return (n - m + 1.0) / total; 
}

int main() {
    int n = 6; // Number of sides on Peter's die
    int m = 6; // Number of sides on Colin's die
    double result = probability(n, m);
    cout << "The probability is: " << result << endl;
    return 0;
}