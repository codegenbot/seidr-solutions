
def car_race_collision(n: int):
    left_to_right = 0
    right_to_left = 0
    for i in range(1, n+1):
        if i % 2 == 0:
            left_to_right += 1
        else:
            right_to_left += 1
    return (left_to_right + right_to_left) * (n - 1) // 2