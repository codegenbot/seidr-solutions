def calculate_total_distance(starting_height, bounciness_index, number_of_bounces):
    total_distance = 0
    for i in range(number_of_bounces):
        current_height = starting_height * (1 - (i / (2 * math.pi)))
        distance_traveled = abs(current_height - starting_height)
        total_distance += distance_traveled
    return total_distance

def calculate_bounciness_index(starting_height, height_after_first_bounce):
    bounciness_index = height_after_first_bounce / starting_height
    return bounciness_index