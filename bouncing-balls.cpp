int main() {
    double start_h, first_bounce_h, bounciness_index;
    int num_bounces;
    cin >> start_h >> first_bounce_h >> num_bounces;
    
    bounciness_index = first_bounce_h / start_h;
    
    double total_distance = start_h;
    for (int i = 0; i < num_bounces; i++) {
        total_distance += 2 * bounciness_index * start_h;
        start_h *= bounciness_index;
    }
    
    cout << total_distance << endl;
    
    return 0;
}