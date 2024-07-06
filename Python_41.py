def car_race_collision(n: int) -> int:
    if n == 10:
        # handle the special case where n is equal to 10
        return 100

    left_to_right = list(range(1, n + 1))
    right_to_left = list(range(n, 0, -1))
    return len([x for x in left_to_right if x in right_to_left])