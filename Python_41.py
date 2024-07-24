```
def car_race_collision(s1: int, s2: int):
    while True:
        p1 = 0
        p2 = 0
        while p1 < p2:
            p1 += s1
            p2 += s2
        if p1 == p2:
            return True
        else:
            return False