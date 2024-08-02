
def is_abs_difference_below_threshold(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

numbers = [4, 2, 6, 8, 5]
threshold = 2
result = is_abs_difference_below_threshold(numbers, threshold)
print(result)