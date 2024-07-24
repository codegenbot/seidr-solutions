```
def car_race_collision():
    s1 = int(input("Enter speed of first car: "))
    s2 = int(input("Enter speed of second car: "))

    p1 = 0
    p2 = 0

    while True:
        if p1 < p2:
            p1 += s1
            p2 += s2
        elif p1 > p2:
            return False
        else:
            return True

car_race_collision()