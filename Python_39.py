def process_input(input_str):
    if input_str.isdigit():
        return int(input_str)
    else:
        return "Invalid input. Please enter a valid integer."