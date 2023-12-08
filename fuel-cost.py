nums = [int(num) for num in input().split()]
total = sum(int(num / 3 - 2) for num in nums)
print(total)