while True:
    try:
        n = int(input("Please enter a positive integer greater than 1: "))
        if n <= 1:
            raise ValueError("Invalid input. Please enter a positive integer greater than 1.")
        break
    except ValueError as ve:
        print(ve)
        continue