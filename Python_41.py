```
def car_race_collision(n: int) -> int:
    return n * (n - 1)

while True:
    try:
        num = input("Enter a number: ")
        n = int(num)
        if isinstance(n, int) and n > 0:
            print(car_race_collision(n))
            break
        else:
            print("Please enter a positive integer.")
    except ValueError:
        print("Invalid input. Please enter a whole number.")