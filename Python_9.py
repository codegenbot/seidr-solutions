def get_valid_input():
    try:
        input_numbers = list(
            map(int, input("Enter comma-separated numbers: ").split(","))
        )
        return input_numbers
    except ValueError:
        print("Invalid input. Please enter comma-separated numbers.")


while True:
    input_numbers = get_valid_input()
    if input_numbers:
        print(f"Input numbers: {input_numbers}")
        break