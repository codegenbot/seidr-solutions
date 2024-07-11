def find_closest_elements()->tuple:
    numbers = []
    
    while True:
        try:
            num = float(input("Enter a number: "))
            numbers.append(num)
        except ValueError:
            print("Invalid input. Please enter a valid number.")
    
    min_diff = float("inf")
    closest_pair = ()
    
    while len(numbers) > 0:
        min_num = min(numbers)
        max_num = max(numbers)
        
        if abs(max_num - min_num) < min_diff:
            min_diff = abs(max_num - min_num)
            closest_pair = (min_num, max_num)
            
        numbers.remove(min_num)
        numbers.remove(max_num)
    
    return closest_pair

print(find_closest_elements())