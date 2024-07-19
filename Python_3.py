def get_integer_input(prompt):
    while True:
        try:
            num = int(input(prompt))
            if num not in [1, 2, 3]:
                print("Please enter a valid integer (1, 2, or 3).")
                continue
            return num
        except ValueError:
            print("Please enter a valid integer.")

operations = [get_integer_input("Enter operation number 1 (1 for addition, 2 for subtraction, 3 for multiplication): "),
              get_integer_input("Enter operation number 2 (1 for addition, 2 for subtraction, 3 for multiplication): "),
              get_integer_input("Enter operation number 3 (1 for addition, 2 for subtraction, 3 for multiplication): ")]