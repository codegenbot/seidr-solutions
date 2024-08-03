def find_max_value():
    max_value = float("-inf")
    while True:
        user_input = input("Enter a number (or 'q' to quit): ")
        if user_input.lower() == "q":
            break
        try:
            num = int(user_input)
            if num > max_value:
                max_value = num
        except ValueError:
            print("Invalid input. Please enter a valid number or 'q' to quit.")
    return max_value