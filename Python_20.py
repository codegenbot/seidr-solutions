numbers = [float(x) for x in input().split(",")]  # Separate input by comma

output = find_closest_elements(numbers)

print(*output)  # Print elements without parentheses