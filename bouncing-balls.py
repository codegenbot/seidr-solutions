[PYTHON]
def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        total_distance += (starting_height + (i * bounciness_index)) * bounciness_index
    return total_distance
[/PYTHON]
[TESTS]
# Test case 1:
assert bouncing_balls(1.001, 1.0, 1) == 2.001
# Test case 2:
assert bouncing_balls(100.0, 99.999, 20) == 3999.599534511501
# Test case 3:
assert bouncing_balls(100.0, 1.0, 20) == 102.02020201974588
# Test case 4:
assert bouncing_balls(15.319, 5.635, 1) == 20.954
# Test case 5:
assert bouncing_balls(2.176, 1.787, 1) == 3.963
[/TESTS]

```