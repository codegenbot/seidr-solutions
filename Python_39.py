def process_input(input_str):
    try:
        n = int(input_str)
        return n
    except ValueError:
        return "Invalid input. Please enter a valid integer."
    except EOFError:
        return "No input provided."

while True:
    user_input = input("Enter an integer: ").strip()
    result = process_input(user_input)
    if isinstance(result, int):
        print(result)
        break
    else:
        print(result)