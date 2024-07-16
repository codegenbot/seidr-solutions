double total_distance = 0.0; 
double prev_distance = bounciness_index;   

for(int i = 1; i <= num_bounces; ++i) {
    total_distance += prev_distance * (start_height + (first_bounce_height - start_height) / ((double)2.0 / i));
    prev_distance *= 2.0; 
}