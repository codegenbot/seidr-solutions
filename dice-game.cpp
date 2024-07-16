#include <iostream>
using namespace std;

double probability(int n, int m) {
    double result = 0.0;
    for(int i = 1; i < n && i <= m; ++i) { 
        if (n > m)
            result += (n - i) / (double)(m);
        else
            result += 1.0 / (double)n; 
    }
    return result;
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