[PYTHON]
def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0.0
    for i in range(num_bounces):
        total_distance += (starting_height + (i * bounciness_index))
    return total_distance
[/PYTHON]
[TESTS]
# Test case 1:
assert bouncing_balls(10, 5, 3) == 26.6666666667
# Test case 2:
assert bouncing_balls(10, 5, 2) == 21.6666666667
# Test case 3:
assert bouncing_balls(10, 5, 1) == 15.0
[/TESTS]
