numbers = [float(x) for x in input("Enter numbers separated by comma: ").split(",")]

def find_closest_elements(numbers):
    numbers.sort()
    closest_diff = float('inf')
    closest_elements = []
    
    for i in range(len(numbers)-1):
        diff = abs(numbers[i] - numbers[i+1])
        if diff < closest_diff:
            closest_diff = diff
            closest_elements = [numbers[i], numbers[i+1]]
    
    return closest_elements

output = find_closest_elements(numbers)
print(output)