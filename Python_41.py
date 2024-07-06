def car_race_collision(n: int) -> int:
    left_to_right = list(range(1, n + 1))
    right_to_left = list(range(n, 0, -1))
    collisions = 0
    for left in left_to_right:
        for right in right_to_left:
            if left == right:
                collisions += 1
    return collisions