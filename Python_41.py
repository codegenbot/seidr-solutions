def car_race_collision(n: int):
    left_to_right = 0
    right_to_left = 0
    for i in range(n):
        if left_to_right > right_to_left:
            left_to_right += 1
        else:
            right_to_left += 1
    return max(left_to_right, right_to_left)