def car_race_collision():
    n = int(input("Enter number of cars: "))
    total_distance = sum(i * (n - i) for i in range(1, n + 1))
    return total_distance