def calculate_bounciness(starting_height, first_bounce_height):
    return first_bounce_height / starting_height

def calculate_total_distance(bounciness, num_bounces):
    total_distance = 0
    for i in range(num_bounces):
        total_distance += bounciness ** (i + 1)
    return total_distance
