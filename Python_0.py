def check_threshold(numbers, threshold):
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

# Call the function with proper arguments
numbers = [2, 5, 8, 10]
threshold = 3
has_close_elements = check_threshold(numbers, threshold)