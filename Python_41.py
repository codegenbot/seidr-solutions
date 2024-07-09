import math

def car_race_collision(n: int):
    return int(math.ceil(1.0 - math.pow((1.0 - 1.0 / n), n * (n - 1) / 2) * 100)

n = int(input("Enter the value of n: "))
result = car_race_collision(n)
print(result)