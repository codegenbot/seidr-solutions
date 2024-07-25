def car_race_collision(n):
    return (n * (n + 1)) // 2


n = int(input("Enter the value of n: "))
number_of_cars = int(input("Enter the number of cars: "))
print(car_race_collision(number_of_cars))