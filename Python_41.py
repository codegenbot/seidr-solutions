def car_race_collision(n: int):
    position = 0
    for i in range(1, n + 1):
        if i % 2 == 0:
            position += i
        else:
            position -= i
    return position