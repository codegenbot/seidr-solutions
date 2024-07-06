def car_race_collision(n: int):
    count = 0
    for i in range(n):
        if i % 2 == 0:
            count += 1
    return count