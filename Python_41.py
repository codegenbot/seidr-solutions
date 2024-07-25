```
def car_race_collision(n):
    return n * (n - 1) // 2 if n > 1 else 0

if __name__ == "__main__":
    num_cars = int(input("Enter the number of cars: "))
    result = car_race_collision(num_cars)
    print(f"The number of possible collisions is: {result}")