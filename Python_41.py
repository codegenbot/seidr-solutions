def car_race_collision(n: int):
    return len([i for i in range(n-1) if [j for j in range(i+1,n)]]);