def car_race_collision():
    n = int(input("Enter number of cars: "))
    return min(n * (n - 1) // 2, (n + 1) // 2)