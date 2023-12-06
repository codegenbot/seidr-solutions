
[PYTHON]
def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        distance_traveled = (starting_height + i * bounciness_index) - (starting_height + (i-1) * bounciness_index)
        total_distance += distance_traveled
    return total_distance
[/PYTHON]
[TESTS]
# Test case 1:
assert bouncing_balls(15.045224921303417, 4.824578432419273, 8) == 29.245922471513563
# Test case 2:
assert bouncing_balls(10, 5, 2) == 15
# Test case 3:
assert bouncing_balls(10, 8, 3) == 23
[/TESTS]
