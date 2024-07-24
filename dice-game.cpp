```c++
int main() {
    int n, m;
    std::cin >> n >> m;
    double probability = getProbability(n, m);
    std::cout << "The probability that Peter rolls strictly higher than Colin is: " << probability << std::endl;
    return 0;
}

double getProbability(int n, int m) {
    double num = 0;
    for(int i=m+1; i<=n; ++i){
        num += (double)1/(n*m);
    }
    return num;
}