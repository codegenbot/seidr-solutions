def car_race_collision(n: int) -> int:
    left_to_right = list(range(1, n + 1))
    right_to_left = list(range(n, 0, -1))
    return len(set(left_to_right).intersection(right_to_left))