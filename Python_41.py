```
n = int(input("Enter the number of cars: "))
a1 = int(input("Enter the acceleration of car1: "))
a2 = int(input("Enter the acceleration of car2: "))

def car_race_collision(n: int, a1: int, a2: int):
    if a1 > a2:
        return (n - 1) * a2
    else:
        return (n - 1) * a1

print(car_race_collision(n, a1, a2))