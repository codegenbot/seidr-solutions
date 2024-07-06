def car_race_collision(n: int) -> int:
    left_to_right = list(range(1, n + 1))
    right_to_left = list(range(n, 0, -1))
    collisions = 0
    for i in range(len(left_to_right)):
        for j in range(len(right_to_left)):
            if left_to_right[i] == right_to_left[j]:
                collisions += 1
    return collisions
