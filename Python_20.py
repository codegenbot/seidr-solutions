numbers = [float(x) for x in input("Enter numbers separated by comma: ").split(",")]

def find_closest_elements(numbers):
    numbers.sort()
    min_diff = abs(numbers[1] - numbers[0])
    result = [numbers[0], numbers[1]]
    
    for i in range(1, len(numbers) - 1):
        diff = abs(numbers[i+1] - numbers[i])
        if diff < min_diff:
            min_diff = diff
            result = [numbers[i], numbers[i+1]]
        elif diff == min_diff:
            result.extend([numbers[i], numbers[i+1]])
    
    return result

output = find_closest_elements(numbers)
print(output)