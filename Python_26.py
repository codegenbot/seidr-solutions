def remove_duplicates(numbers):
    input_numbers = []
    
    while True:
        user_num = int(input("Enter an integer (or 'q' to quit): "))
        
        if str(user_num).lower() == 'q':
            break
        
        numbers = list(dict.fromkeys([user_num]))
        input_numbers.extend(numbers)
    
    return input_numbers