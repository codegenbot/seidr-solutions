int main() {
    double result = getProbability(6, 6); 
    std::cout << "Result: " << result << std::endl;
    return 0;
}

double getProbability(int n, int m) {
    double num = 0;
    for(int i=m+1; i<=n; ++i){
        num += (double)1/(n*m);
    }
    return num;
}