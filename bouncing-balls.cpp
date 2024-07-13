int main() {
    double h0, h1, bounciness_index;
    int num_bounces;
    cin >> h0 >> h1 >> num_bounces;
    
    bounciness_index = h1 / h0;
    double total_distance = h0 + h1;
    for (int i = 2; i <= num_bounces; ++i) {
        h1 *= bounciness_index;
        total_distance += h1 * 2;
    }
    
    cout << total_distance << endl;
    
    return 0;
}