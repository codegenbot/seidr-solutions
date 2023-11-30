def rescale_to_unit(numbers: List[float]) -> List[float]:
    min_num = min(numbers)
    max_num = max(numbers)
    return [(num - min_num) / (max_num - min_num) for num in numbers]

# Read input from user
numbers = list(map(float, input().split()))

# Call the function with user input
output = rescale_to_unit(numbers)

# Print the result
print(output)