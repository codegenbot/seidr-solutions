```
def filter_integers():
    while True:
        try:
            value = int(input("Enter an integer between 0 and 100 (or -1 to quit): "))
            if 0 <= value <= 100: 
                return [value]
            elif value == -1: 
                break
            else:
                print("Invalid input. Please enter a number within the specified range.")
        except ValueError:
            if input("Invalid input. Enter again? (y/n): ") != 'y':
                break