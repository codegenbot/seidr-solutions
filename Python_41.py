def car_race_collision(car: int, speed: int):
    if speed > 0:
        total_distance = (car * (2 * car - 1)) // 2
        return total_distance
    else:
        return 0