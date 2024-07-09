def check_threshold(numbers, threshold):
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

# Read input from user
numbers = list(map(int, input().split()))
threshold = int(input())

# Call the function with correct parameters
result = check_threshold(numbers, threshold)

# Print the result
print(result)