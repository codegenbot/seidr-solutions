```Python
def car_race_collision(n: int):
    if n <= 1:
        return 0
    return n * (n - 1)

n = int(input("Enter the number of cars: "))
print(car_race_collision(n))