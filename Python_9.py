def rolling_max(numbers):
    max_values = []
    n = len(numbers)
    for i in range(n):
        max_values.append(max(numbers[max(0, i - 1) : min(n, i + 2)]))
    return max_values


numbers = list(map(int, input().split()))
result = rolling_max(numbers)
print(result)