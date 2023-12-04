
[PYTHON]
def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        distance_traveled_during_bounce = (starting_height + i * bounciness_index) * 2
        total_distance += distance_traveled_during_bounce
    return total_distance
[/PYTHON]
