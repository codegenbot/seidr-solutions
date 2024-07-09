```
def car_race_collision():
    n = int(input("Enter the number of cars: "))
    print(n * (n - 1) if 2 <= n <= 10 else "Invalid input")