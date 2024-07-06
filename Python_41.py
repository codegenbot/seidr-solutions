from functools import reduce
import operator

def car_race_collision():
    n = int(input("Enter the number of cars: "))
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