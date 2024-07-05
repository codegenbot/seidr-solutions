def car_race_collision(n):
    left_to_right = [i for i in range(1, n + 1)]
    right_to_left = [i for i in range(n, 0, -1)]
    collisions = 0
    for i in range(len(left_to_right)):
        if left_to_right[i] < right_to_left[i]:
            collisions += 1
    return collisions