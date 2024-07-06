def car_race_collision(n: int, speeds):
    return sum(speed * (n - i) for i, speed in enumerate(speeds))