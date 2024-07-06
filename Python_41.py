
def car_race_collision(n: int):
    left_to_right = range(1, n + 1)
    right_to_left = range(n, 0, -1)
    return len(set(left_to_right).intersection(right_to_left))