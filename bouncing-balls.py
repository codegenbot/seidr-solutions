def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    cumulative_height = starting_height

    for _ in range(num_bounces):
        total_distance += cumulative_height
        cumulative_height = 2 * cumulative_height - cumulative_height * bounciness_index

    return round(total_distance, 12)