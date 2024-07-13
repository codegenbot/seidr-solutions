```
def car_race_collision(n: int) -> int:
    return n * (n - 1)

while True:
    try:
        while True:
            user_input = input("Do you want to calculate a collision for a number of cars? (yes/no): ")
            if user_input.lower() == "yes":
                n = int(input("Enter the number of cars: "))
                if isinstance(n, int) and n > 0:
                    print(car_race_collision(n))
                    break
                else:
                    print("Please enter a positive integer.")
            elif user_input.lower() == "no":
                print("Goodbye!")
                exit()
            else:
                print("Invalid input. Please enter 'yes' or 'no'.")
    except ValueError:
        print("Invalid input. Please enter a whole number.")