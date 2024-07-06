from functools import reduce

def car_race_collision():
    n = int(input("Enter the number of cars: "))
    speeds = list(map(int, input("Enter the speeds (space-separated): ").split()))
    total_damage = reduce(lambda x, y: x + (y * 100), speeds, 0)
    return str(total_damage)

print(car_race_collision())