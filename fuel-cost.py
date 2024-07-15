nums = list(map(int, input().split()))
print(sum(max(0, int(num / 3) - 2) for num in nums))