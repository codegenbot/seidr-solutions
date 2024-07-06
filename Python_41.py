```
from functools import reduce
import operator

def car_race_collision():
    while True:
        try:
            n = int(input("Enter the number of cars: "))
            break
        except ValueError:
            print("Invalid input. Please enter an integer.")
    
    if n < 1:
        return 
    total_damage = 0
    for i in range(n):
        while True:
            try:
                speed, damage = map(int, input(f"Enter speed and damage for car {i+1}: ").split())
                break
            except ValueError:
                print("Invalid input. Please enter two integers separated by a space.")
        total_damage += damage * speed
    return str(total_damage)

print(car_race_collision())

while True:
    print(car_race_collision())