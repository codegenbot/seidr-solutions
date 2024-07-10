```
def car_race_collision(n=None):
    if n is None:
        try:
            n = int(input("Enter the number of cars: "))
        except ValueError:
            n = 1
    return str(n*(n-1)//2)