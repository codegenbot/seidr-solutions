#include <iostream>
using namespace std;

double probability(int n, int m) {
    double total = (double)n * m;
    double exclude = 0.0;
    if(m >= n - m + 1)
        exclude = (m - n + 1.0) / ((double)m);
    return 1.0 - (exclude + (total - exclude));
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