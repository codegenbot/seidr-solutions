def find_min_difference(numbers):
    numbers.sort()
    min_difference = float('inf')
    for i in range(1, len(numbers)):
        min_difference = min(min_difference, abs(numbers[i] - numbers[i-1]))
    return min_difference