#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total_outcomes = (double)(n*m);
    double favorable_outcomes = 0;

    for(int i = m; i < n; ++i) {
        favorable_outcomes += (double)(n - i) / ((double)n * m);
    }

    return favorable_outcomes;
}

int main() {
    int n, m;
    std::cout << "Enter the number of sides for Peter's die: ";
    std::cin >> n; 
    std::cout << "Enter the number of sides for Colin's die: ";
    std::cin >> m; 
    double result = probability(n, m); 
    cout << "The probability is: " << result << endl;
    return 0;
}