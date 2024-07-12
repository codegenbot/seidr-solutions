def filter_integers(input_list=None):
    result = []
    if input_list is None:
        while True:
            try:
                value = int(input("Enter an integer between 0 and 100 (or -1 to quit): "))
                if 0 <= value <= 100: 
                    result.append(value)
                elif value == -1: 
                    break
                else:
                    print("Invalid input. Please enter a number within the specified range.")
            except ValueError:
                if input("Invalid input. Enter again? (y/n): ") != 'y':
                    break
    else:
        for value in input_list:
            if isinstance(value, int) and 0 <= value <= 100: 
                result.append(value)
    return result