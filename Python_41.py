def car_race_collision(n: int):
    result = 0
    for i in range(1, n):
        for j in range(i):
            if j > 0:
                result += 1
    return result