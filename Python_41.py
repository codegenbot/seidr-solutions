```
def car_race_collision(n):
    if n < 1:
        return "Invalid input"
    else:
        return str(n * (n - 1) // 2)

n = int(input("Enter the value of n: "))
number_of_cars = int(input("Enter the number of cars: "))
print(car_race_collision(n))