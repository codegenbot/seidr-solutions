def car_race_collision():
    n = int(input("Enter the number of cars: ") or 1)  
    return str(n * (n - 1) // 2)
input("Enter the number of cars: ")
assert car_race_collision() == "45"