import re

def get_valid_input():
    while True:
        try:
            user_input = raw_input("Enter comma-separated numbers: ").strip()
            if re.match(r'^\d+(,\d+)*$', user_input):
                input_numbers = list(map(int, user_input.split(",")))
                return input_numbers
            else:
                print("Invalid input. Please enter comma-separated numbers.\n")
        except ValueError:
            print("Invalid input. Please enter comma-separated numbers.\n")
        except (EOFError, KeyboardInterrupt):
            print("\nInvalid input. Please enter comma-separated numbers.\n")

input_numbers = get_valid_input()
print(f"Input numbers: {input_numbers}")