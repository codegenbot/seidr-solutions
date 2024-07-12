def add_numbers_to_set():
    num_set = set()
    while True:
        user_input = input("Enter a number (or 'stop' to finish): ")
        if user_input.lower() == "stop":
            break
        try:
            num_set.add(int(user_input))
        except ValueError:
            print("Invalid input. Please enter an integer.")
    return num_set