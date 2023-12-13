
[CODE]
def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    return 0.0
#[SOL]
def bouncing_balls(starting_height, first_bounce_height, num_bounces):
    if starting_height <= 0 or first_bounce_height < 0:
        raise ValueError("Invalid input")
    elif num_bounces < 1:
        raise ValueError("Invalid input")
    else:
        bounciness = first_bounce_height / starting_height
        distance = (2 * bounciness * num_bounces) + (0.5 * -math.pow(bounciness, 2) + bounciness) * num_bounces
    return distance
#[/SOL]
[CHK]
import math
def checker(candidate):

    # Check some simple cases
    assert True, "This prints if this assert fails 1 (good for debugging!)"
    assert candidate(1.001, 1.0, 1) == 2.001, "Error"
    assert candidate(100.0, 99.999, 20) == 3999.599534511501, "Error"
    assert candidate(100.0, 1.0, 20) == 102.02020201974588, "Error"
    assert candidate(15.319, 5.635, 1) == 20.954, "Error"
    assert candidate(2.176, 1.787, 1) == 3.963, "Error"

    # Check some edge cases that are easy to work out by hand.
    assert True, "This prints if this assert fails 2 (also good for debugging!)"
    assert candidate(100.0, 1.0, 1) == 101.0, "Error"
    assert candidate(15.319, 15.319, 1) == 16.638, "Error"

