def process_input(input_str):
    try:
        n = int(input_str.strip())
        return n
    except ValueError:
        return "Invalid input. Please enter a valid integer."

user_input = input("Enter an integer: ")
result = process_input(user_input)
print(result)