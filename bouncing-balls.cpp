int main() {
    double h0, h1;
    int bounces;
    cin >> h0 >> h1 >> bounces;
    
    double bounciness_index = h1 / h0;
    double total_distance = h0 + h1;
    
    for (int i = 2; i <= bounces; ++i) {
        total_distance += 2 * h1 * pow(bounciness_index, i);
    }
    
    cout << total_distance << endl;
    
    return 0;
}