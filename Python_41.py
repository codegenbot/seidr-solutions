def car_race_collision(n: int):
    count = 0
    for i in range(1, n+1):
        if i % 2 == 0:
            # Even numbered cars move left to right
            count += (n - i) // 2
        else:
            # Odd numbered cars move right to left
            count += (i - 1) // 2
    return count * 2