def car_race_collision(tracks):
    collisions = 0
    for i in range(tracks):
        for j in range(i + 1, tracks):
            if (i + j) % 3 == 0:
                collisions += 1
    return collisions