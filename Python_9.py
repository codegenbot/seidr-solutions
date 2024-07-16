def get_valid_input():
    while True:
        try:
            user_input = input("Enter comma-separated numbers: ").strip()
            input_numbers = list(map(int, user_input.split(",")))
            return input_numbers
        except (ValueError, TypeError):
            print("Invalid input. Please enter comma-separated numbers.\n")

input_numbers = get_valid_input()
print(f"Input numbers: {input_numbers}")