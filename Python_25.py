while True:
    try:
        n = int(input("Enter a positive integer greater than 1: "))
        if n <= 1:
            raise ValueError(
                "Invalid input. Please enter a positive integer greater than 1."
            )
        break
    except ValueError as ve:
        print("Invalid input. Please enter a valid positive integer greater than 1.")
        continue