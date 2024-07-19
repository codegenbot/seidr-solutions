def rolling_max(numbers):
    max_values = []
    current_max = float('-inf')
    
    for num in numbers:
        current_max = max(current_max, num)
        max_values.append(current_max)
    
    return max_values

numbers = [5, 2, 3, 8, 1, 4]
print(rolling_max(numbers))