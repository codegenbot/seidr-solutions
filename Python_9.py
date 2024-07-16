def get_valid_input():
    while True:
        try:
            user_input = input("Enter comma-separated numbers: ").strip()
            if user_input:
                if all(char.isdigit() or char == "," for char in user_input):
                    input_numbers = list(map(int, user_input.split(",")))
                    return input_numbers
                else:
                    print("Invalid input. Please enter comma-separated numbers.\n")
            else:
                print("Invalid input. Please enter comma-separated numbers.\n")
        except (ValueError, EOFError):
            print("Invalid input. Please enter comma-separated numbers.\n")


input_numbers = get_valid_input()
print(f"Input numbers: {input_numbers}")