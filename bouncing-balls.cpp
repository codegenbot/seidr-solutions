int main() {
    double start_height, bounce_height;
    int num_bounces;
    
    cin >> start_height >> bounce_height >> num_bounces;
    
    double bounciness_index = bounce_height / start_height;
    double total_distance = start_height + (start_height * bounciness_index * num_bounces);
    
    cout << total_distance;
    
    return 0;
}