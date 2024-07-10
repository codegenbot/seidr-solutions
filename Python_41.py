```Python
def car_race_collision(n=None):
    if n is None:
        while True:
            try:
                n = int(input("Enter the number of cars: "))
                if n < 2:
                    print("Number of cars should be at least 2. Please enter again.")
                else:
                    break
            except ValueError:
                print("Invalid input. Please enter a whole number.")
    return str((n*(n-1))//2)