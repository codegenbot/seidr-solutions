def rolling_max(numbers):
    return [max(numbers[i:i+3]) for i in range(len(numbers)-2)]

numbers = list(map(int, input().split()))
result = rolling_max(numbers)
print(result)