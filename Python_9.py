def rolling_max(numbers):
    max_list = []
    for i in range(len(numbers) - 2):
        max_list.append(max(numbers[i], numbers[i + 1], numbers[i + 2]))
    return max_list


numbers = list(map(int, input().split()))
result = rolling_max(numbers)
print(result)