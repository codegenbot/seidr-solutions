
def car_race_collision(n: int) -> int:
    left_to_right = range(1, n + 1)
    right_to_left = range(n, 0, -1)
    return len([i for i in left_to_right if i in right_to_left])