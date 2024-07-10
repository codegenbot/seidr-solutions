Here is the corrected code:

```Python
def car_race_collision():
    n = int(input("Enter number of cars: "))
    a1 = int(input("Enter speed of car 1 (in km/hr): "))
    a2 = int(input("Enter speed of car 2 (in km/hr): "))

    if n == 1:
        return 0
    elif a1 > a2:
        return (n - 1) * a2 + a2
    else:
        return (n - 1) * a1 + a1