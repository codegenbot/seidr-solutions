def car_race_collision(num_tracks):
    collisions = 0
    for i in range(num_tracks):
        if (i + 1) % 3 == 0:
            collisions += 1
    return collisions