numbers = list(map(int, input().split()))
numbers.sort()
min_diff = float("inf")
result = min(
    [(numbers[i], numbers[i + 1]) for i in range(len(numbers) - 1)],
    key=lambda x: x[1] - x[0],
)
result