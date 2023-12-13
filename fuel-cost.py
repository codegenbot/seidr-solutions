nums = list(map(int, input().split()))
total = sum((num - 2) / 3 for num in nums)
rounded_total = int(total)
print(rounded_total)