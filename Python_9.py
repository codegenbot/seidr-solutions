def rolling_max(numbers):
    result = []
    max_num = float("-inf")
    for num in numbers:
        max_num = max(max_num, num)
        result.append(max_num)
    return result


# Read input from the user
numbers = list(map(int, input().split()))

# Call the function to get the rolling maximums
output = rolling_max(numbers)

# Print the rolling maximums
print(output)