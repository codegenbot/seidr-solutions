def process_input(input_str):
    try:
        n = int(input_str)
        return n
    except ValueError:
        return "Invalid input. Please enter a valid integer."

while True:
    user_input = input("Enter an integer: ").strip()
    if not user_input:
        print("No input provided. Please try again.")
        continue

    result = process_input(user_input)
    print(result) if isinstance(result, int) else print(result)
    if isinstance(result, int):
        break