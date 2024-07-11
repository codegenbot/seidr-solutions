```
def car_race_collision(*args):
    if len(args) != 2:
        raise TypeError("This function takes exactly two parameters.")
    n, m = args
    if n < m:
        return n * m
    else:
        return m * (m - 1)

print(car_race_collision(10, 5))