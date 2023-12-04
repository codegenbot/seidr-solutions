[PYTHON]
import math

def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        total_distance += (starting_height + i * bounciness_index) * 2
    return round(total_distance, 2)
[/PYTHON]
[TESTS]
# Test case 1:
assert bouncing_balls(10, 5, 3) == 523.47
# Test case 2:
assert bouncing_balls(10, 5, 2) == 311.73
# Test case 3:
assert bouncing_balls(10, 5, 1) == 206.84
[/TESTS]
