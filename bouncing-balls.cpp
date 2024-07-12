int main() {
    double start_height, first_bounce, bounciness_index, total_distance;
    int num_bounces;
    
    cin >> start_height >> first_bounce >> num_bounces;
    
    bounciness_index = first_bounce / start_height;
    
    total_distance = start_height + start_height * (1 + bounciness_index) * (pow(bounciness_index, num_bounces) - 1) / (bounciness_index - 1);
    
    cout << total_distance << endl;
    
    return 0;
}