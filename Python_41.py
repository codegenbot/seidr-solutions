def car_race_collision(n: int) -> int:
    if n < 2:
        return 0
    total_collisions = 1
    for i in range(2, n):
        total_collisions += i
    return total_collisions

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