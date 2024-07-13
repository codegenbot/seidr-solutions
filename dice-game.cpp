#include <iostream>

double probability(int n, int m) {
    double total = (double)n * m;
    double p = 0.0;

    for (int i = 1; i < n; i++) {
        p += (double)i / total;
    }

    return p;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    
    double result = probability(n, m);
    for(int i = 1; i <= m; i++){
        if(i < n)result+= (double)(n-i)/(double)n/m;
        else break;
    }
    std::cout << "The probability is: " << result << std::endl;
    
    return 0;
}