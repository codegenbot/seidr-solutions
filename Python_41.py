
def car_race_collision(n: int):
    left_to_right = list(range(1, n + 1))
    right_to_left = list(range(n, 0, -1))
    collisions = 0
    for i in range(n):
        if left_to_right[i] == right_to_left[i]:
            collisions += 1
    return collisions