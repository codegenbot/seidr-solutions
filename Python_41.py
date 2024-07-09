def car_race_collision(car: int, speed: int):
    if speed > 0:
        return sum(range(1, car + 1)) - (car * (car - 1)) // 2
    elif speed == 0:
        return car
    else:
        return 0