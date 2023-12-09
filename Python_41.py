def car_race_collision(n):
    collisions = {}
    for i in range(n):
        for j in range(i+1, n):
            if (i + j) % 2 == 0:
                collisions[(i, j)] = collisions.get((i, j), 0) + 1
    return sum(collisions.values())