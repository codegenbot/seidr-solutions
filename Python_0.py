def has_close_elements(numbers, threshold):
    sorted_numbers = sorted(numbers)
    for i in range(len(sorted_numbers) - 1):
        if sorted_numbers[i + 1] - sorted_numbers[i] < threshold:
            return True
    return False

numbers_input = input().split()
threshold_input = int(input())

numbers = [int(num) for num in numbers_input]
threshold = int(threshold_input)

result = has_close_elements(numbers, threshold)
print(result)