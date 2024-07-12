int main() {
    double h0, h1;
    int b;
    
    cin >> h0 >> h1 >> b;
    
    double bi = h1 / h0;
    double distance = h0 + h1;
    
    for (int i = 2; i <= b; i++) {
        distance += h1 * pow(bi, i);
    }
    
    cout << fixed << distance << endl;
    
    return 0;
}