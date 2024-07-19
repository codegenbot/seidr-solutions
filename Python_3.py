def get_integer_input(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            print("Please enter a valid integer.")

operations = [get_integer_input(f"Enter operation number {i+1} (1 for addition, 2 for subtraction, 3 for multiplication): ") for i in range(3)]