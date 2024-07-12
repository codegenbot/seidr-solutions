```
def car_race_collision(n=None):
    if n is None:
        n = int(input("Enter a number: "))
    return (n * (n + 1) * (2 * n + 1)) // 2