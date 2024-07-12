int main() {
    double start_height, first_bounce, bounciness_index;
    int num_bounces;
    cin >> start_height >> first_bounce >> num_bounces;
    
    bounciness_index = first_bounce / start_height;
    double total_distance = start_height * (1 + bounciness_index);
    
    for (int i = 2; i <= num_bounces; ++i) {
        total_distance += 2 * start_height * pow(bounciness_index, i);
    }
    
    cout << total_distance << endl;
    
    return 0;
}