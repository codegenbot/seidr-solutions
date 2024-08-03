nums = [int(input()) for _ in range(int(input()))]
print(sum([(num // 3) - 2 for num in nums]))