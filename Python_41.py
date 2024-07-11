def car_race_collision():
    n = int(input("Enter number of cars: "))
    m = int(input("Enter maximum speed (in km/h): "))
    return n * m if n < m else m * (m - 1)