def car_race_collision():
    n = int(input("Enter number of cars: "))
    if n <= 1:
        print(0)
    else:
        print(n * (n - 1) // 2)