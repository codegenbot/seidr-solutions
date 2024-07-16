#include <iostream>
using namespace std;

double probability(int n, int m) {
    if(n == 0 || m == 0)
        throw runtime_error("The number of sides on the dice cannot be zero.");
    double result = 0.0;
    for(int i = 1; i <= m - 1; ++i) {
        result += (n - i + 1.0) / ((double)n * m);
    }
    return result;
}

int main() {
    int n = 6; // Number of sides on Peter's die
    int m = 6; // Number of sides on Colin's die
    try {
        double result = probability(n, m);
        cout << "The probability is: " << (result * 100) << "%" << endl;
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}