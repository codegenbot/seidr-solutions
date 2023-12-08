nums = [int(num) for num in input().split()]
total = sum((num // 3) - 2 * (num // 3) for num in nums)
print(total)