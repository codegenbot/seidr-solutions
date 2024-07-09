def rolling_max(numbers):
    max_numbers = []
    for i in range(len(numbers) - 1):
        max_num = max(numbers[i], numbers[i + 1])
        max_numbers.append(max_num)
    return max_numbers


numbers = list(map(int, input().split()))
result = rolling_max(numbers)
print(result)