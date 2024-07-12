numbers = [float(x) for x in input().strip().strip(",").split(",") if x]

def find_closest_elements(numbers):
    sorted_numbers = sorted(numbers)
    smallest_diff = float('inf')
    result = []
    
    for i in range(len(sorted_numbers) - 1):
        diff = abs(sorted_numbers[i] - sorted_numbers[i + 1])
        if diff < smallest_diff:
            smallest_diff = diff
            result = [sorted_numbers[i], sorted_numbers[i + 1]]
    
    return result

output = find_closest_elements(numbers)
print(output)