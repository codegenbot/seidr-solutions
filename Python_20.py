numbers.sort()
min_diff = abs(numbers[0] - numbers[1])
result = (numbers[0], numbers[1])
for i in range(1, len(numbers) - 1):
    diff = abs(numbers[i] - numbers[i + 1])
    if diff < min_diff:
        min_diff = diff
        result = (numbers[i], numbers[i + 1])
return result