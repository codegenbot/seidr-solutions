total_distance = starting_height
for _ in range(num_bounces):
    total_distance += 2 * first_bounce_height
    first_bounce_height *= bounciness_index
return total_distance