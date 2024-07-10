def car_race_collision(n: int):
    pairs = 0
    for i in range(1, n+1):
        if n-i >= 0:
            pairs += n-i
    return pairs