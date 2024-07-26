nums = [int(input()) for _ in range(2)]
print(sum(max(num // 3 - 2, 0) for num in nums))