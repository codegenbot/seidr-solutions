```cpp
int main() {
    int n = 6; // for example
    int m = 4;
    double probability = getProbability(n, m);
    return 0;
}

double getProbability(int n, int m) {
    double num = 0;
    for(int i=m+1; i<=n; ++i){
        num += (double)1/(n*m);
    }
    return num;
}