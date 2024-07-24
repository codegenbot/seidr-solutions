def car_race_collision(n: int):
    collisions = 0
    for i in range(n):
        left_to_right = (n - i) // 2
        right_to_left = n - left_to_right - 1
        if left_to_right > right_to_left:
            collisions += left_to_right
        else:
            collisions += right_to_left + 1
    return collisions