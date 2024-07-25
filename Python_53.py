def calculate_sum():
    while True:
        print("Please enter two integers separated by a space.")
        try:
            x, y = map(int, input("Enter first and second numbers: ").split())
            if len(str(x)) > 1 or len(str(y)) > 1:
                raise ValueError
            print(f"Sum is: {x + y}")
            choice = input("Do you want to continue? (yes/no): ")
            if choice.lower() != "yes":
                break
        except ValueError:
            while True:
                try:
                    x, y = map(
                        int,
                        input(
                            "Invalid input. Please enter two valid integers separated by a space: "
                        ).split(),
                    )
                    print(f"Sum is: {x + y}")
                    choice = input("Do you want to continue? (yes/no): ")
                    if choice.lower() != "yes":
                        break
                except ValueError:
                    pass


calculate_sum()