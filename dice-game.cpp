```cpp
#include <iostream>
using namespace std;

double probability(int n, int m) {
    if (n <= m) return 0; 
    double result = 0.0;
    for (int i = m+1; i <= n; ++i) { 
        result += ((double)i)/n; 
    }
    return result;
}

int main() {
    int n = 6; // number of sides for Peter's die
    int m = 6; // number of sides for Colin's die
    double result = probability(n, m);
    cout << "Probability: " << to_string(result) << endl;
    return 0;
}