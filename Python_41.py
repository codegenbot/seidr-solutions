```
def car_race_collision():
    n = int(input("Enter the number of cars: "))
    if 2 <= n <= 10:
        print(n * (n - 1))
    else:
        print("Invalid input")