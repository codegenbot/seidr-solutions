def find_max_value():
    input_list = []
    while True:
        user_input = input("Enter a number (or 'stop' to finish): ")
        if user_input.lower() == 'stop':
            break
        try:
            num = int(user_input)
            input_list.append(num)
        except ValueError:
            print("Invalid input. Please enter a number or type 'stop' to finish.")
    return max(input_list)