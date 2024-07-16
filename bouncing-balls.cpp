int main() {
    double start, first_bounce;
    int num_bounces;
    cin >> start >> first_bounce >> num_bounces;
    
    double bounciness_index = first_bounce / start;
    double total_distance = start + first_bounce;
    
    for (int i = 1; i < num_bounces; ++i) {
        total_distance += 2 * first_bounce;
        first_bounce *= bounciness_index;
    }
    
    cout << total_distance << endl;
    
    return 0;
}