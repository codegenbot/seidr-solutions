```c++
int main() {
    int n = 6; 
    int m = 4; 
    double result = calculateProbability(n, m);
    std::cout << "Probability: " << result << std::endl;
    return 0;
}

double calculateProbability(int n, int m) {
    if(m >= n)
        return 0.0;
    else
        return (n - m) * 1.0 / (n + m - 1);
}