n = input()
nums = [int(input()) for _ in range(n)]
result = sum([(num // 3) - 2 for num in nums])
print(result)