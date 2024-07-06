def car_race_collision(n: int):
    left_to_right = set(range(1, n + 1))
    right_to_left = set(range(n, 0, -1))
    return len(left_to_right.intersection(right_to_left)) * (n // 2)