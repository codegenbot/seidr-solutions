
[PYTHON]
def calculate_total_distance(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0.0
    for i in range(1, num_bounces+1):
        total_distance += (starting_height + (i - 1) * bounciness_index)
    return total_distance
[/PYTHON]
[TESTS]
# Test case 1:
assert calculate_total_distance(10, 5, 3) == 20.0
# Test case 2:
assert calculate_total_distance(10, 6, 4) == 30.0
# Test case 3:
assert calculate_total_distance(10, 7, 5) == 40.0
[/TESTS]
