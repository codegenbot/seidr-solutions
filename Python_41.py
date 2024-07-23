```
def car_race_collision(cars):
    collisions = 0
    speed = [i + 1 for i in range(1, cars + 1)]
    for i in range(1, cars):
        if speed[i] > speed[i-1]:
            collisions += 1
    return collisions