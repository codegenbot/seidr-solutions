def filter_integers():
    values = []
    
    while True:
        try:
            user_input = input("Enter a list of values (separated by space), or 'stop' to finish: ")
            
            if user_input.lower() == 'stop':
                break
            
            values += [int(num) for num in user_input.split()]
        except ValueError:
            print("Invalid input. Please enter integers only, or 'stop' to finish.")
    
    return [value for value in values if isinstance(value, int)]