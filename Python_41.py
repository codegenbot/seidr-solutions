def car_race_collision(n: int):
    result = 0
    for i in range(1, n):
        for j in range(i):
            if (n - i) > (n - j):
                result += 1
            elif (n - i) < (n - j):
                result += 1
    return result