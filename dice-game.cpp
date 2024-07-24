int main() {
    cout << fixed << setprecision(6) << getProbability(6, 6) << endl;
    return 0;
}

double getProbability(int n, int m) {
    double num = 0.0;
    for(int i=m+1; i<=n; ++i){
        num += (double)i/(n*m);
    }
    return num;
}