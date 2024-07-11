def find_closest_pair(numbers):
    numbers.sort()
    min_diff = float("inf")
    closest_pair = (0, 0)

    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < min_diff:
            min_diff = abs(numbers[i] - numbers[i + 1])
            closest_pair = (numbers[i], numbers[i + 1])

    return closest_pair

# Read input from the user
numbers = list(map(int, input().split()))

# Call the function and print the result
print(find_closest_pair(numbers))