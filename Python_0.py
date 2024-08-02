def check_adjacent_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Take input from the user
numbers = list(map(int, input().split()))
threshold = int(input())

# Call the function with correct arguments
result = check_adjacent_numbers(numbers, threshold)
print(result)