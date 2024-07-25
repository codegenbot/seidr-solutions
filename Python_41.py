def car_race_collision():
    n = int(input("Enter the number of cars: "))
    if n <= 0:
        return "Please enter a positive integer."
    else:
        return sum(range(1, n + 1))