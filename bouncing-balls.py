[PYTHON]
def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        total_distance += (starting_height + i * bounciness_index)
        total_distance += starting_height
    return round(total_distance, 2)
[/PYTHON]
[TESTS]
# Test case 1:
assert bouncing_balls(10, 5, 3) == 48.76
# Test case 2:
assert bouncing_balls(10, 5, 2) == 37.50
# Test case 3:
assert bouncing_balls(10, 5, 1) == 25.00
[/TESTS]
