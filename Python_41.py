def car_race_collision(n):
    collisions = {}
    for i in range(n):
        for j in range(i+1, n):
            if (i < j and j < n-i) or (i > j and j > n-i):
                collisions[(i, j)] = 1
    return sum(collisions.values())