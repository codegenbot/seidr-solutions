def get_integer_input(prompt):
    while True:
        try:
            value = int(input(prompt))
            if value not in [1, 2, 3]:
                raise ValueError
            return value
        except (ValueError, EOFError):
            print("Please enter a valid integer.")