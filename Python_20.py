def find_closest_elements(numbers):
    min_diff = float('inf')
    result = []
    
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i+1])
        if diff < min_diff:
            min_diff = diff
            result = [numbers[i], numbers[i+1]]
    
    return result

numbers = [float(x) for x in input("Enter numbers separated by commas: ").split(",")]
output = find_closest_elements(numbers)
print(output)