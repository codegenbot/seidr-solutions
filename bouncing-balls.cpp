int main() {
    double start_height, bounce_height, distance = 0.0, bounciness_index;
    int num_bounces;
    
    cin >> start_height >> bounce_height >> num_bounces;
    
    bounciness_index = bounce_height / start_height;
    distance = start_height + bounce_height;
    
    for (int i = 2; i <= num_bounces; ++i) {
        bounce_height = bounciness_index * bounce_height;
        distance += bounce_height;
    }
    
    cout << distance << endl;
    
    return 0;
}