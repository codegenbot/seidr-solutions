
def car_race_collision():
    left_to_right = list(range(1, 10))
    right_to_left = list(range(9, 0, -1))
    return len([i for i in left_to_right if i in right_to_left])