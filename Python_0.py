def check_threshold(numbers, threshold):
    for i in range(len(numbers)):
        for j in range(i + 1, len(numbers)):
            if abs(numbers[i] - numbers[j]) < threshold:
                return True
    return False

# Replace check() with check_threshold() and pass appropriate arguments
has_close_elements = [2, 4, 6, 8, 10]
threshold_value = 2
result = check_threshold(has_close_elements, threshold_value)
print(result)