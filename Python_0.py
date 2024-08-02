def check_threshold(numbers, threshold):
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

# Call the function with appropriate parameters
numbers = [1, 4, 8, 12]
threshold = 3
result = check_threshold(numbers, threshold)
print(result)