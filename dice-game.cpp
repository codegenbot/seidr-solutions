```cpp
#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    if(total == 0)
        throw runtime_error("The number of sides on the dice cannot be zero.");
    return (n - m + 1.0) / total; 
}

int main() {
    int n = 6; // Number of sides on Peter's die
    int m = 6; // Number of sides on Colin's die
    try {
        double result = probability(n, m);
        cout << "The probability is: " << result << endl;
    } catch (runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}