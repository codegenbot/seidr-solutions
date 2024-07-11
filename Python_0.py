def has_close_values(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Input from user
numbers = [int(x) for x in input().split()]
threshold = int(input())

# Call the function with user input
print(has_close_values(numbers, threshold))