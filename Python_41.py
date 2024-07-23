def car_race_collision():
    n = int(input("Enter the number of cars: "))
    return sum([i*(n-i) for i in range(1,n+1)])