```
def car_race_collision(n):
    if n < 3:
        return "No collision"
    elif n % 3 == 0:
        return f"Collision at {n//3}th lap"
    else:
        return f"Collision at {(n-1)//3+1}th lap"

while True:
    try:
        num = input("Enter a number (or 'q' to quit): ")
        if num.lower() == 'q':
            break
        n = int(num)
        if isinstance(n, int) and n > 0:
            print(car_race_collision(n))
            break
        else:
            print("Please enter a positive integer.")
    except ValueError:
        print("Invalid input. Please enter a whole number.")