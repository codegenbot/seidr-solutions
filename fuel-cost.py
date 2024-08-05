nums = [int(input()) for _ in range(int(input()))]
result = sum([max(num // 3 - 2, 0) for num in nums])
print(result)