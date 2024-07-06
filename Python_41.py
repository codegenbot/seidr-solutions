def car_race_collision():
    n = int(input("Enter the number of cars: "))
    if n <= 1:
        return 0
    return n * (n - 1) // 2