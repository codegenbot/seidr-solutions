def get_valid_input():
    while True:
        try:
            raw_input = input("Enter comma-separated numbers: ").strip()
            if not raw_input:
                raise ValueError
            input_numbers = [int(num) for num in raw_input.split(",")]
            return input_numbers
        except ValueError:
            print("Invalid input. Please enter valid comma-separated numbers.\n")

input_numbers = get_valid_input()
print(f"Input numbers: {input_numbers}")