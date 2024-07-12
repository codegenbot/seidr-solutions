```
def remove_duplicates(numbers=None):
    if numbers is None:
        numbers = []
    
    while True:
        user_num = int(input("Enter an integer (or 'q' to quit): "))
        
        if str(user_num).lower() == 'q':
            break
        
        numbers.extend([user_num])
    
    return list(dict.fromkeys(numbers))