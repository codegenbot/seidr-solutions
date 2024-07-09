numbers = list(map(int, input().split()))
result = [max(numbers[i:i+3]) for i in range(len(numbers)-2)]
print(result)