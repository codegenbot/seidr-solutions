int main() {
    double starting_height, first_bounce_height, bounciness_index;
    int num_bounces;
    
    cin >> starting_height >> first_bounce_height >> num_bounces;
    bounciness_index = first_bounce_height / starting_height;
    
    double total_distance = starting_height + first_bounce_height;
    double current_height = first_bounce_height;
    
    for (int i = 2; i <= num_bounces; ++i) {
        current_height *= bounciness_index;
        total_distance += current_height;
    }
    
    cout << total_distance << endl;
    
    return 0;
}