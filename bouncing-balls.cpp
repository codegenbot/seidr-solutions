int main() {
    double starting_height, first_bounce_height, total_bounces;
    cin >> starting_height >> first_bounce_height >> total_bounces;
    
    double bounciness_index = first_bounce_height / starting_height;
    double total_distance = starting_height + first_bounce_height;
    
    for (int i = 2; i <= total_bounces; ++i) {
        total_distance += first_bounce_height * pow(bounciness_index, i);
    }
    
    cout << total_distance << endl;
    
    return 0;
}