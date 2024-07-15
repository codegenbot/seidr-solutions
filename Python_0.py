def check_threshold(numbers, threshold):
    for num in numbers:
        if num > threshold:
            return True
    return False

result = check_threshold(numbers, threshold)