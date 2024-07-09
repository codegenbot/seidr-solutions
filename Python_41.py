```
def car_race_collision(car: int, speed: int):
    if speed > 0:
        total_distance = sum(range(1, car+1)) * speed
        total_distance -= (car*(car-1)*(2*speed)) // 2
        return total_distance
    else:
        return 0