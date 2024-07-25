def calculate_sum():
    while True:
        print("Please enter two integers separated by a space.")
        try:
            x, y = map(int, input("Enter first and second numbers: ").split())
            if not (isinstance(x, int) and isinstance(y, int)):
                raise ValueError
            print(f"Sum is: {x + y}")
            choice = input("Do you want to continue? (yes/no): ")
            while True:
                if choice.lower() != "yes":
                    response = input("Are you sure? (yes/no): ")
                    if response.lower() == "no":
                        break
                    elif response.lower() == "yes":
                        break
                    else:
                        print("Invalid input. Please enter valid inputs.")
                else:
                    break
        except ValueError:
            print("Invalid input. Please enter valid integers.")
        choice = input("Do you want to continue? (yes/no): ")
        if choice.lower() != "no":
            break


calculate_sum()