```
def car_race_collision(tracks):
    collisions = 0
    for i in range(1, tracks+1): 
        for j in range(i): 
            if (j == int((tracks - 1) / 3)) or (j == 2 * int((tracks - 1) / 3)):
                collisions += 1
    return collisions