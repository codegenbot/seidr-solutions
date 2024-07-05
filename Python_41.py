def car_race_collision(n):
    left_to_right = [i for i in range(1, n + 1)]
    right_to_left = [i for i in range(n, 0, -1)]
    collisions = 0
    for x in left_to_right:
        if x in right_to_left:
            collisions += 1
    return collisions