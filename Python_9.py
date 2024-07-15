numbers = list(map(int, input().strip().split()))
rolling_max = lambda nums: [max(numbers[i:i+3]) for i in range(len(nums)-2)]
result = rolling_max(numbers)
print(result)