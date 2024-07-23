int main() {
    double start_height, first_bounce_height;
    int num_bounces;
    
    cin >> start_height >> first_bounce_height >> num_bounces;
    
    double bounciness_index = first_bounce_height / start_height;
    double total_distance = start_height + first_bounce_height;
    
    double multiplier = bounciness_index;
    for(int i = 2; i <= num_bounces; i++) {
        total_distance += 2 * first_bounce_height * multiplier;
        multiplier *= bounciness_index;
    }
    
    printf("%.15f\n", total_distance);
    
    return 0;
}