def find_min_difference(numbers):
    numbers.sort()
    min_diff = float("inf")
    result = ()
    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result

# Get user input
user_input = input().split()
numbers = [int(num) for num in user_input]

# Call the function with user input
output = find_min_difference(numbers)
output