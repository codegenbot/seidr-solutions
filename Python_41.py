def car_race_collision(n: int, m: int):
    if n < m:
        return n * m
    else:
        return m * (m - 1)

n = int(input("Enter number of cars: "))
m = int(input("Enter number of laps: "))

print(car_race_collision(n, m))