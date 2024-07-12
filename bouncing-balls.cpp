int main() {
    double h0, h1, bounciness;
    int num_bounces;
    cin >> h0 >> h1 >> num_bounces;
    
    bounciness = h1 / h0;
    double total_distance = h0 + h1;
    for (int i = 2; i <= num_bounces; ++i) {
        total_distance += 2 * h1 * pow(bounciness, i);
    }
    
    cout << total_distance << endl;
    
    return 0;
}