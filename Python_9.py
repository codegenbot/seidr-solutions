def rolling_max(numbers):
    max_list = [max(numbers[i:i+3]) for i in range(len(numbers)-2)]
    return max_list

numbers = list(map(int, input().split()))
result = rolling_max(numbers)
print(result)