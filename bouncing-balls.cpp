int main() {
    double starting_height, bounce_height, distance = 0.0, bounciness_index;
    int num_bounces;
    cin >> starting_height >> bounce_height >> num_bounces;
    
    bounciness_index = bounce_height / starting_height;
    
    distance = starting_height + bounce_height; // first bounce
    
    for (int i = 1; i < num_bounces; i++) {
        distance += 2 * bounce_height; // additional bounces
        bounce_height *= bounciness_index;
        distance += bounce_height;
    }
    
    cout << distance << endl;
    
    return 0;
}