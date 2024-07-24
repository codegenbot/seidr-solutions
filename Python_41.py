def car_race_collision(s1: int, s2: int):
    p1 = 0
    p2 = 0
    while True:
        p1 += s1
        p2 += s2
        if p1 == p2:
            return True
        elif p1 > p2:
            return False