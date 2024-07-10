def car_race_collision(tracks):
    collisions = 0
    for i in range(1, tracks+1):  
        for j in range(i):
            if (j + 1) % 3 == 0:
                collisions += 1
    return collisions * tracks