```
def car_race_collision(n: int):
    result = 0
    for i in range(1, n + 1):
        if i % 2 == 0:
            result += i * (i - 1) // 2
        else:
            result += i
    return result