def check_numbers_threshold(numbers, threshold):
    count = 0
    for num in numbers:
        if num > threshold:
            count += 1
    return count


result = check_numbers_threshold([1, 5, 10, 15, 20], 5)
print(result)