```
def car_race_collision(tracks):
    return sum((tracks // 3) + (tracks % 3 > i))