def rolling_max(numbers):
    output = []
    for i in range(len(numbers) - 2):
        output.append(max(numbers[i], numbers[i + 1], numbers[i + 2]))
    return output

numbers = list(map(int, input().split()))
result = rolling_max(numbers)
print(result)