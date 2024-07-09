def car_race_collision(car_speed: int):
    if isinstance(car_speed, tuple):
        car, speed = car_speed
    else:
        car = speed = car_speed
    return (car * (car - 1)) // 2