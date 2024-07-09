def rolling_max(numbers):
    max_values = []
    for i in range(len(numbers)):
        max_values.append(max(numbers[:i+1]))
    return max_values

numbers = list(map(int, input().split()))
result = rolling_max(numbers)
print(result)