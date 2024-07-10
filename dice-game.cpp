#include <iostream>
double diceGame(int n, int m) {
    double sum = 0;
    for (int i = 1; i <= std::min(n,m); i++) {
        if(i > m - i){
            sum += 2 * ((n - i + 1) / (double)n) * ((m - i + 1) / (double)m);
        } else{
            sum += ((n - i + 1) / (double)n) * ((m - i + 1) / (double)m);
        }
    }
    for (int i = m+1; i <= n; i++) {
        if(i > m){
            sum += (n - i + 1) / (double)n * (m - i + 1) / (double)m;
        }
    }
    return sum;
}

int main() {
    int n, m;
    std::cin >> n >> m;
    double result = diceGame(n, m);
    std::cout << "Probability: " << result << std::endl;
    return 0;
}