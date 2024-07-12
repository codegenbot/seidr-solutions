int main() {
    double start_height, first_bounce, bounciness_index, total_distance = 0.0;
    int num_bounces;
    
    cin >> start_height >> first_bounce >> num_bounces;
    
    bounciness_index = first_bounce / start_height;
    
    for (int i = 0; i < num_bounces; ++i) {
        total_distance += start_height + first_bounce;
        start_height = first_bounce;
        first_bounce *= bounciness_index;
    }
    
    printf("%.15f\n", total_distance);
    
    return 0;
}