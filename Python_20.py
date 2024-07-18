def find_closest_elements(numbers):
    numbers.sort()
    min_diff = min(numbers[i + 1] - numbers[i] for i in range(len(numbers) - 1))
    closest_elements = [
        (numbers[i], numbers[i + 1])
        for i in range(len(numbers) - 1)
        if numbers[i + 1] - numbers[i] == min_diff
    ][0]
    return closest_elements

# Read input from user
numbers = list(map(int, input().split()))

# Call the function with user input
result = find_closest_elements(numbers)
print(result)