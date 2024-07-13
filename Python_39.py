def process_input(input_str):
    try:
        n = int(input_str)
        return n
    except ValueError:
        return "Invalid input. Please enter a valid integer."


input_str = input("Enter an integer: ")
result = process_input(input_str)
print(result)