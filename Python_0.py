def check_numbers(numbers, threshold):
    count = 0
    for num in numbers:
        if num > threshold:
            count += 1
    return count

numbers = [3, 7, 11, 15, 19]
threshold = 10
result = check_numbers(numbers, threshold)
print(result)