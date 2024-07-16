int main() {
    double start_height, first_bounce_height;
    int num_bounces;
    cin >> start_height >> first_bounce_height >> num_bounces;
    
    double bounciness_index = first_bounce_height / start_height;
    
    double total_distance = 0.0;
    for (int i = 0; i <= num_bounces; ++i) {
        total_distance += start_height;
        start_height *= bounciness_index;
        total_distance += start_height;
    }
    
    cout << total_distance << endl;
    
    return 0;
}