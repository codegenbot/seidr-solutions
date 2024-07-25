numbers.sort()
min_diff = float("inf")
result = ()
for i in range(1, len(numbers)):
    if abs(numbers[i] - numbers[i - 1]) < min_diff:
        min_diff = abs(numbers[i] - numbers[i - 1])
        result = (numbers[i - 1], numbers[i])
return result