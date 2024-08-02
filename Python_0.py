def check_adjacent_numbers(numbers, threshold):
    numbers.sort()
    for i in range(len(numbers) - 1):
        if abs(numbers[i] - numbers[i + 1]) < threshold:
            return True
    return False

# Correct way to call the function
has_close_elements = check_adjacent_numbers([1, 3, 5, 7], 2)
print(has_close_elements)