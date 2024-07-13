```
def car_race_collision(n: int):
    if n < 2:
        return 0
    else:
        return n * (n - 1)

n = int(input("Enter a number: "))
print(car_race_collision(n))