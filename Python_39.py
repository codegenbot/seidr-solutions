while True:
    user_input = input("Enter an integer: ").strip()
    if not user_input:
        raise EOFError("No input provided.")

    try:
        result = int(user_input)
        print(result)
        break
    except ValueError:
        print("Invalid input. Please enter a valid integer.")