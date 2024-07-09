def car_race_collision(car: int, speed: int):
    if speed > 0:
        return (car * (3*car - 1)) // 2
    else:
        return (car * (2*car + 1)) // 2