def car_race_collision(distance):
    for i in range(1, int((distance / 2) ** 0.5) + 1):
        if i * (i + 1) > distance:
            return i * (i - 1)
    return distance