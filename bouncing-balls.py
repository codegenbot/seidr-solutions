[PYTHON]
def get_bounciness_index(starting_height, first_bounce_height):
    return first_bounce_height / starting_height

def get_total_distance(bounciness_index, num_bounces):
    total_distance = 0
    for i in range(num_bounces):
        total_distance += (1 + bounciness_index) ** (i + 1)
    return total_distance
[/PYTHON]
[TESTS]
# Test case 1:
assert get_total_distance(get_bounciness_index(1.0, 1.0), 1) == 2.0
# Test case 2:
assert get_total_distance(get_bounciness_index(100.0, 99.999), 20) == 3999.599534511501
# Test case 3:
assert get_total_distance(get_bounciness_index(100.0, 1.0), 20) == 102.02020201974588
# Test case 4:
assert get_total_distance(get_bounciness_index(15.319, 5.635), 1) == 20.954
# Test case 5:
assert get_total_distance(get_bounciness_index(2.176, 1.787), 1) == 3.963
[/TESTS]
