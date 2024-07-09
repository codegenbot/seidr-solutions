def car_race_collision(n: int, speed1: float, speed2: float):
    distance = (speed1 + speed2) / (speed1 * speed2)
    return round(distance, 2)