numbers = list(map(int, input("Enter space-separated numbers: ").split()))
numbers.sort()
min_diff = float("inf")
result = (0, 0)

for i in range(len(numbers) - 1):
    diff = numbers[i + 1] - numbers[i]
    if diff < min_diff:
        min_diff = diff
        result = (numbers[i], numbers[i + 1])

result