def rolling_max(numbers):
    res = []
    for i in range(len(numbers)-2):
        res.append(max(numbers[i:i+3]))
    return res

numbers = list(map(int, input().split()))
result = rolling_max(numbers)
print(result)