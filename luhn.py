n = int(input())
nums = list(map(int, input().split()))

total = 0
for i in range(n):
    if i % 2 == 1:
        num = nums[i] * 2
        if num > 9:
            num -= 9
        total += num
    else:
        total += nums[i]

print(total)