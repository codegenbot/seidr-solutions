def get_valid_input():
    while True:
        try:
            input_numbers = list(
                map(int, input("Enter comma-separated numbers: ").strip().split(","))
            )
            return input_numbers
        except ValueError:
            print("Invalid input. Please enter comma-separated numbers.")


input_numbers = get_valid_input()
print(f"Input numbers: {input_numbers}")