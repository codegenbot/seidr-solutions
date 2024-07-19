def get_integer_input(prompt):
    while True:
        try:
            num = int(input(prompt + " (1, 2, or 3): "))
            if num in [1, 2, 3]:
                return num
            print("Invalid input. Please enter a valid integer (1, 2, or 3).")
        except ValueError:
            print("Invalid input. Please enter a valid integer.")

operations = [
    get_integer_input("Enter operation number 1"),
    get_integer_input("Enter operation number 2"),
    get_integer_input("Enter operation number 3"),
]