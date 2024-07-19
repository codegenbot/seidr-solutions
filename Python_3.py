def get_integer_input(prompt):
    while True:
        try:
            num = int(input(prompt + " (1, 2, or 3): "))
            if num in [1, 2, 3]:
                return num
            print("Please enter a valid integer (1, 2, or 3).")
        except ValueError:
            print("Please enter a valid integer.")

operations = [
    get_integer_input("Enter the first operation number"),
    get_integer_input("Enter the second operation number"),
    get_integer_input("Enter the third operation number"),
]