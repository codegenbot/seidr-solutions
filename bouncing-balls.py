
def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    bounciness_index = first_bounce_height / starting_height
    total_distance = 0
    for i in range(num_bounces):
        total_distance += (starting_height + ((i + 1) * bounciness_index))
    return total_distance

def test_bouncing_balls():
    assert bouncing_balls(10, 5, 3) == 28.33
    assert bouncing_balls(10, 5, 4) == 37.5
    assert bouncing_balls(10, 5, 5) == 46.67
    print("Test passed!")