def car_race_collision(n):
    left_to_right = list(range(1, n+1))
    right_to_left = list(range(n, 0, -1))
    if n % 2 == 1:
        return len(set(left_to_right) & set(right_to_left)) + 1
    else:
        return n // 2