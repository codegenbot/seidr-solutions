def check_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False


# Call the function with actual numbers list and threshold value
has_close_elements = check_numbers([5, 7, 11, 18], 6)
print(has_close_elements)