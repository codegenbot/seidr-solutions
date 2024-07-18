def find_min_difference(numbers):
    numbers.sort()
    min_difference = float("inf")
    for i in range(len(numbers) - 1):
        difference = abs(numbers[i] - numbers[i + 1])
        if difference < min_difference:
            min_difference = difference
    return min_difference