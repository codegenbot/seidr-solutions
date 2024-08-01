def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
       thre    if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

has_close_elements = [1, 3, 5, 7]
threshold = 2
print(check_numbers(has_close_elements, threshold))