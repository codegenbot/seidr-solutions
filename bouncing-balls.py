[PYTHON]
def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        total_distance += (starting_height + (i * bounciness_index)) - (i * bounciness_index)
    return total_distance
[/PYTHON]
[TESTS]
# Test case 1:
assert bouncing_balls(89.90523697828513, 75.54262115206262, 18) == 50.0
# Test case 2:
assert bouncing_balls(89.90523697828513, 75.54262115206262, 10) == 37.5
# Test case 3:
assert bouncing_balls(89.90523697828513, 75.54262115206262, 5) == 25.0
[/TESTS]
