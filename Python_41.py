```
n = int(input("Enter the number of cars: "))
def car_race_collision(n):
    return n * (n - 1) if 2 <= n <= 10 else "Invalid input"
print(car_race_collision(n))