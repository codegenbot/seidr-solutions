def concatenate(strings=None):
    if strings:
        return "".join(s.strip() for s in strings)
    
    user_strings = []

    while True:
        try:
            user_input = input(
                "Enter a list of strings separated by commas or 'q' to quit: "
            )
            if user_input.lower() == "q":
                return
            user_strings = [s.strip() for s in user_input.split(",")]
        except ValueError:
            print("Invalid input. Please enter a list of strings separated by commas.")