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
assert bouncing_balls(89.90523697828513, 75.54262115206262, 18) == 273.0172664776694
# Test case 2:
assert bouncing_balls(89.90523697828513, 75.54262115206262, 19) == 290.0172664776694
# Test case 3:
assert bouncing_balls(89.90523697828513, 75.54262115206262, 20) == 307.0172664776694
# Test case 4:
assert bouncing_balls(89.90523697828513, 75.54262115206262, 21) == 324.0172664776694
# Test case 5:
assert bouncing_balls(89.90523697828513, 75.54262115206262, 22) == 341.0172664776694
[/TESTS]
