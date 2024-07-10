```
def car_race_collision():
    n = int(input("Number of drivers: "))
    direction = input("Is it one-way (1) or two-way (2) traffic? ")
    if int(direction) == 2:
        return (n * (n - 1)) // 2
    else:
        return n