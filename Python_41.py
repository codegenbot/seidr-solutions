def car_race_collision(n=None):
    while True:
        try:
            if n is None:
                n = int(input("Enter a number: "))
            return sum(range(1, n+1))
        except ValueError:
            print("Invalid input! Please enter an integer.")