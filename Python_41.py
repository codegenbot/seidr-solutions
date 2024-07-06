```
from functools import reduce

def car_race_collision():
    n = int(input("Enter the number of cars: "))
    speeds = list(map(int, input("Enter the speeds (space-separated): ").split()))
    damages = list(map(int, input("Enter the damages (space-separated): ").split()))
    total_damage = sum(damage * speed for damage, speed in zip(damages, speeds))
    return str(total_damage)

print(car_race_collision())