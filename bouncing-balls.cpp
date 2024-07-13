int main() {
    double h0, h1;
    int bounces;
    cin >> h0 >> h1 >> bounces;
    
    double bounciness_index = h1 / h0;
    double total_distance = h0 * (1 - pow(bounciness_index, bounces + 1)) / (1 - bounciness_index);
    
    cout << total_distance << endl;
    
    return 0;
}