```
def car_race_collision():
    n = int(input("Enter the number of cars: "))
    collision_count = 0
    for i in range(1, n):
        for j in range(i):
            if abs(i - j) < n:
                collision_count += 1
    return collision_count