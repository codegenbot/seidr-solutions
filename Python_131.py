def find_max_value():
    max_value = float('-inf')
    while True:
        try:
            user_input = int(input("Enter a positive integer (or 'q' to quit): "))
            if user_input == 'q':
                break
            elif user_input < 0:
                print("Please enter a positive integer.")
                continue
            max_value = max(max_value, user_input)
        except ValueError:
            print("Invalid input. Please enter an integer or 'q' to quit.")
    return max_value