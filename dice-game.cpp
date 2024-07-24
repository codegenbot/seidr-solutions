int main() {
    int n, m;
    std::cout << "Enter number of sides for Peter's die: ";
    std::cin >> n;
    std::cout << "Enter number of sides for Colin's die: ";
    std::cin >> m;
    double result = getProbability(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << result << std::endl;
    return 0;
}

double getProbability(int n, int m) {
    double totalPossibleOutcomes = (double)n*m;
    double num = 0;
    for(int i=1; i<m; ++i){
        num += (double)1/totalPossibleOutcomes;
    }
    return num;
}