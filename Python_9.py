def rolling_max(numbers):
    max_list = []
    for i in range(len(numbers)):
        max_val = max(numbers[max(0, i - 1) : min(len(numbers), i + 2)])
        max_list.append(max_val)
    return max_list


numbers = list(map(int, input().split()))
result = rolling_max(numbers)
print(result)