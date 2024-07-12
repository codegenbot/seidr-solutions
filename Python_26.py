def remove_duplicates(numbers):
    input_numbers = set()
    
    while True:
        user_num = int(input("Enter an integer (or 'q' to quit): "))
        
        if str(user_num).lower() == 'q':
            break
        
        input_numbers.add(user_num)
    
    return list(input_numbers)