int main() {
    double h, b;
    int n;
    cin >> h >> b >> n;
    
    double bounciness_index = b / h;
    double total_distance = h + b;
    for (int i = 2; i <= n; ++i) {
        total_distance += 2 * bounciness_index * total_distance;
    }
    
    cout << total_distance << endl;
    
    return 0;
}