numbers = [float(x) for x in input().strip().split(",")]

def find_closest_elements(numbers):
    sorted_numbers = sorted(numbers)
    closest_elements = [sorted_numbers[0], sorted_numbers[1]]
    return closest_elements

output = find_closest_elements(numbers)
print(output)