double total_distance = start_height + first_bounce_height;
double total_bounce_height = first_bounce_height;

for (int i = 3; i <= num_bounces; i++) {
    total_bounce_height *= bounciness_index;
    total_distance += 2 * total_bounce_height;
    total_distance += start_height;
}

std::cout << total_distance << std::endl;