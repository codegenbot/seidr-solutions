```cpp
int main() {
    double getProbability(int n, int m) {
        double num = 0;
        for(int i=m+1; i<=n; ++i){
            num += (double)1/(n*m);
        }
        return num;
    };
    return 0;
}