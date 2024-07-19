def get_integer_input(prompt):
    while True:
        try:
            num = int(input(prompt))
            if num == 1 or num == 2 or num == 3:
                return num
            else:
                print("Please enter a valid integer (1, 2, or 3).")
        except ValueError:
            print("Please enter a valid integer.")

operations = [get_integer_input(f"Enter operation number {i+1} (1 for addition, 2 for subtraction, 3 for multiplication): ") for i in range(3)]