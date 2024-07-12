def filter_integers():
    result = []
    while True:
        try:
            value = int(input("Enter an integer between 0 and 100 (or -1 to quit): "))
            if value == -1:
                break
            elif 0 <= value <= 100: 
                result.append(value)
            else:
                print("Invalid input. Please enter a number within the specified range.")
        except ValueError:
            if input("Invalid input. Enter again? (y/n): ") != 'y':
                break
    return result