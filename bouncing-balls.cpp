int main() {
    double start_height, first_bounce_height, total_distance = 0;
    int num_bounces;
    
    cin >> start_height >> first_bounce_height >> num_bounces;
    
    double bounciness_index = first_bounce_height / start_height;
    
    total_distance = start_height + first_bounce_height; // distance for the first bounce
    
    for(int i = 1; i < num_bounces; i++) {
        total_distance += 2 * first_bounce_height; // add distance for each subsequent bounce
        first_bounce_height *= bounciness_index; // update height of bounce
    }
    
    cout << total_distance << endl;
    
    return 0;
}