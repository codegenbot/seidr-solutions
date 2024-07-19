def get_integer_input(prompt):
    while True:
        try:
            value = int(input(prompt))
            if value in [1, 2, 3]:
                return value
            else:
                print("Please enter a valid operation number (1, 2, or 3).")
        except ValueError:
            print("Please enter a valid integer.")

operations = [get_integer_input(f"Enter operation number {i+1} (1 for addition, 2 for subtraction, 3 for multiplication): ") for i in range(3)]