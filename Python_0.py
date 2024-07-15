def check_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Read input from user
numbers = list(map(int, input().split()))
threshold = int(input())

# Call the function with correct arguments
result = check_threshold(numbers, threshold)

# Print the result
print(result)