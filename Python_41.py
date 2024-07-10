```
def car_race_collision(tracks):
    collisions = 0
    for i in range(3):  
        collisions += (tracks // 3) * 3  
    return collisions