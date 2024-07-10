def car_race_collision():
    n = int(input("Enter the number of cars: "))
    total_collisions = 0
    for i in range(1, n):
        total_collisions += min(i, n - i)
    return total_collisions