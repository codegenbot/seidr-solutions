def car_race_collision(n):
    left_to_right = 0
    right_to_left = n - 1
    collisions = {}
    while left_to_right < n and right_to_left >= 0:
        if left_to_right == right_to_left:
            collisions[(left_to_right, right_to_left)] = 1
            left_to_right += 1
            right_to_left -= 1
        elif left_to_right < right_to_left:
            left_to_right += 1
        else:
            right_to_left -= 1
    return sum(collisions.values())
