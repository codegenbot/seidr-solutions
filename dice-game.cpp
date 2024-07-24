```cpp
double getProbability(int n, int m) {
    double num = 0;
    for(int i=1; i<m; ++i){
        num += (double)(n-i+1)/((double)n*m);
    }
    return num;
}