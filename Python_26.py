```
def remove_duplicates(numbers):
    input_numbers = []
    
    while True:
        user_num = int(input("Enter an integer (or 'q' to quit): "))
        
        if str(user_num).lower() == 'q':
            break
        
        if user_num not in input_numbers:
            input_numbers.append(user_num)
    
    return sorted(list(set(input_numbers)))