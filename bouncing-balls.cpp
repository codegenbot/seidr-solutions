int main() {
    double start_height, first_bounce_height, total_distance = 0, bounciness_index;
    int num_bounces;
    cin >> start_height >> first_bounce_height >> num_bounces;
    
    bounciness_index = first_bounce_height / start_height;
    
    for (int i = 0; i <= num_bounces; ++i) {
        total_distance += (i == 0 || i % 2 == 1) ? (start_height * bounciness_index) : start_height;
    }
    
    cout << total_distance << endl;
    
    return 0;
}