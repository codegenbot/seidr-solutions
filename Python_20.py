def find_min_difference(numbers):
    numbers.sort()
    min_diff = float("inf")
    result = (0.0, 0.0)
    for i in range(len(numbers) - 1):
        diff = abs(numbers[i] - numbers[i + 1])
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result

# Input numbers
numbers = list(map(float, input().split()))
# Call the function with input numbers
output = find_min_difference(numbers)
print(output)