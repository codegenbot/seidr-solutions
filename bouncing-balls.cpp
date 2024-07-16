int main() {
    double start_height, bounce_height;
    int num_bounces;
    cin >> start_height >> bounce_height >> num_bounces;
    
    double bounciness_index = bounce_height / start_height;
    double total_distance = start_height + (start_height + bounce_height) * (1 + bounciness_index) * (num_bounces - 1);
    
    cout << total_distance << endl;
    
    return 0;
}