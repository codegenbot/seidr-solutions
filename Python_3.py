def get_integer_input(prompt):
    while True:
        try:
            print(prompt)
            num = int(input())
            if num in [1, 2, 3]:
                return num
            else:
                print("Please enter a valid integer (1, 2, or 3).")
        except ValueError:
            print("Please enter a valid integer.")

operations = [get_integer_input("Enter operation number 1 (1, 2, or 3): "),
              get_integer_input("Enter operation number 2 (1, 2, or 3): "),
              get_integer_input("Enter operation number 3 (1, 2, or 3): ")]