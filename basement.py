n = int(input())
nums = list(map(int, input().split()))

prefix_sum = 0
for i in range(n):
    prefix_sum += nums[i]
    if prefix_sum < 0:
        print(i)
        break