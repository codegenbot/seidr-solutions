```
def car_race_collision(n: int):
    a1 = int(input("Enter the speed of the first car: "))
    a2 = int(input("Enter the speed of the second car: "))
    if a1 > a2:
        return (n - 1) * a2
    else:
        return (n - 1) * a1