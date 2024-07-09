def car_race_collision(car: int, speed: int):
    if speed == 0:
        return 0
    elif speed > 0:
        return (car * (car - 1)) // 2
    else:
        return car - 1