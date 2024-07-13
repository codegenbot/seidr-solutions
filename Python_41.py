```
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