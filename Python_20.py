def find_closest_elements(numbers):
    numbers.sort()
    avg = sum(numbers) / len(numbers)
    closest = min(numbers, key=lambda x: abs(x - avg))
    return [closest]


numbers = [float(x) for x in input("Enter numbers separated by comma: ").split(",")]
output = find_closest_elements(numbers)
print(output)