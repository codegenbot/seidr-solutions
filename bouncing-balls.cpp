int main() {
    double starting_height, bounce_height, bounciness_index, total_distance;
    int num_bounces;
    
    cin >> starting_height >> bounce_height >> num_bounces;
    
    bounciness_index = bounce_height / starting_height;
    total_distance = starting_height + bounce_height;
    
    for (int i = 2; i <= num_bounces; ++i) {
        bounce_height *= bounciness_index;
        total_distance += bounce_height;
    }
    
    cout << total_distance << endl;
    
    return 0;
}