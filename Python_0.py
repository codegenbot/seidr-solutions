def check_numbers_threshold(numbers, threshold):
    return len([num for num in numbers if num > threshold])

result = check_numbers_threshold([1, 5, 10, 15, 20], 5)
print(result)