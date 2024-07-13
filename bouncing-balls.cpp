int main() {
    double start_height, first_bounce_height, bounciness_index, total_distance;
    int num_bounces;
    
    cin >> start_height >> first_bounce_height >> num_bounces;
    
    bounciness_index = first_bounce_height / start_height;
    total_distance = start_height * (1 + bounciness_index * (1 - pow(bounciness_index, num_bounces)) / (1 - bounciness_index));
    
    cout << total_distance << endl;
    
    return 0;
}