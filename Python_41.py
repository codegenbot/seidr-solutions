def car_race_collision(n: int):
    return sum((i-1) // n for i in range(2*n+1))