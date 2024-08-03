n = int(input())
nums = list(map(int, input().split()))

total = 0
for i in range(n):
    total += nums[i]
    if total < 0:
        print(i)
        break