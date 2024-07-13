```
def car_race_collision(n):
    if n < 3:
        return "No collision"
    elif n % 3 == 0:
        return f"Collision at {n//3}th lap"
    else:
        return f"No collision, last safe lap was at {n-1}"

while True:
    try:
        num = input("Enter a number (or 'q' to quit): ")
        if num.lower() == 'q':
            break
        n = int(num)
        if isinstance(n, int) and n > 0:
            result = car_race_collision(n)
            while True:
                cont = input(f"Continue? ({result}) (y/n): ")
                if cont.lower() == 'n':
                    break
            break
        else:
            print("Please enter a positive integer.")
    except ValueError:
        print("Invalid input. Please enter a whole number.")