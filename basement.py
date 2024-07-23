n = int(input())
nums = list(map(int, input().split()))

sum_so_far = 0
for i in range(n):
    sum_so_far += nums[i]
    if sum_so_far < 0:
        print(i)
        break