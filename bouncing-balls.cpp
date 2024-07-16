int main() {
    double start_height, bounce_height, bounciness_index, total_distance;
    int num_bounces;
    
    cin >> start_height >> bounce_height >> num_bounces;
    
    bounciness_index = bounce_height / start_height;
    total_distance = start_height + bounce_height; // first bounce
    
    for (int i = 1; i < num_bounces; ++i) {
        total_distance += 2 * bounce_height; // up + down
        bounce_height *= bounciness_index;
        total_distance += bounce_height; // bounce
    }
    
    cout << total_distance << endl;
    
    return 0;
}