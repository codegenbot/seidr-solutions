nums = list(map(int, input().split()))
print(sum(round(num / 3) - 2 for num in nums))