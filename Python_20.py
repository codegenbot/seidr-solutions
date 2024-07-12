numbers.sort()
min_diff = float("inf")
result = None

for i in range(len(numbers) - 1):
    diff = numbers[i + 1] - numbers[i]
    if diff < min_diff:
        min_diff = diff
        result = (numbers[i], numbers[i + 1])

result