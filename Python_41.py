def car_race_collision(n: int):
    if n < 2:
        return False
    cars = [0] * (n + 1)
    for i in range(1, n + 1):
        cars[i] = i
    while True:
        for i in range(1, len(cars)):
            if abs(cars[i - 1] - cars[i]) == 1:
                return True