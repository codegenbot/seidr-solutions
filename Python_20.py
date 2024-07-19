def find_min_diff_pair(numbers):
    numbers.sort()
    min_diff = float("inf)
    result = ()
    for i in range(len(numbers) - 1):
        diff = numbers[i + 1] - numbers[i]
        if diff < min_diff:
            min_diff = diff
            result = (numbers[i], numbers[i + 1])
    return result

# Test the function with a sample list of numbers
numbers = [5, 9, 2, 15, 8]
print(find_min_diff_pair(numbers))