def rolling_max(numbers):
    result = []
    for i in range(len(numbers) - 2):
        result.append(max(numbers[i], numbers[i + 1], numbers[i + 2]))
    return result


numbers = list(map(int, input().split()))
result = rolling_max(numbers)
print(result)