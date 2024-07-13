int main() {
    double start_height, bounce_height, bounciness_index;
    int num_bounces;
    cin >> start_height >> bounce_height >> num_bounces;
    
    bounciness_index = bounce_height / start_height;
    double total_distance = start_height + (start_height * bounciness_index * num_bounces * 2);
    
    cout << total_distance << endl;
    
    return 0;
}