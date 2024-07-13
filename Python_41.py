```
def car_race_collision(n: int):
    total_cars = n * (n - 1)
    if n > 0:
        return f"There will be {total_cars} collisions."
    else:
        return "Please enter a positive integer."

while True:
    try:
        n = int(input("Enter a number: "))
        print(car_race_collision(n))
        break
    except ValueError:
        print("Invalid input. Please enter a whole number.")