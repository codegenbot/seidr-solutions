```
def car_race_collision(distance: int):
    a1 = int(input("Enter speed of car 1: "))
    a2 = int(input("Enter speed of car 2: "))

    if a1 > a2:
        return (distance - 1) * a2
    else:
        return (distance - 1) * a1