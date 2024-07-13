int main() {
    double h1, h2;
    int n;
    cin >> h1 >> h2 >> n;
    
    double bounciness_index = h2 / h1;
    double total_distance = h1 + h1 * bounciness_index;
    for (int i = 2; i <= n; ++i) {
        total_distance += 2 * h1 * pow(bounciness_index, i);
    }
    
    cout << total_distance << endl;
    
    return 0;
}