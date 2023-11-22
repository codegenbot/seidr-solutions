def car_race_collision(n: int, m: int):
    collission_place = abs(n - m)
    if collission_place <= 200:
        return True
    else:
        return False


car_race_collision(10, 20)