```
def car_race_collision():
    try:
        n = int(input("Enter the number of cars: "))
    except ValueError:
        n = 1
    collisions = 0
    for i in range(2, n+1):
        collisions += i-1
    return str(collisions)