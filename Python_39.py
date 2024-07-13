def process_input(input_str):
    try:
        n = int(input_str)
        return n
    except ValueError:
        return "Invalid input. Please enter a valid integer."

try:
    user_input = int(input("Enter an integer: "))
    result = process_input(user_input)
    print(result)
except ValueError:
    print("Invalid input. Please enter a valid integer.")