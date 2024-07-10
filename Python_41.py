```
def car_race_collision(tracks):
    collisions = 0
    for i in range(1, tracks+1):  
        if (i + 1) % 3 == 0:
            collisions += 1
        else: 
            for j in range(i-1, -1, -1): 
                if (j + 1) % 3 == 0:
                    collisions += 1
    return collisions