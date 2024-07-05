def car_race_collision(n):
    left_to_right = {i for i in range(1, n + 1)}
    right_to_left = {i for i in range(n, 0, -1)}
    return len(left_to_right & right_to_left)