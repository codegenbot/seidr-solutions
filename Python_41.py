def car_race_collision():
    n = int(input("Enter the number of cars: "))
    m = int(input("Enter the number of roads: "))
    return min(n - 1, m) * (n - min(n - 1, m)) // 2