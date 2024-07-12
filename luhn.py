n = int(input())
nums = list(map(int, input().split()))

total = 0
for i in range(n):
    if i % 2 == 1:
        double = nums[i] * 2
        if double > 9:
            double -= 9
        total += double
    else:
        total += nums[i]

print(total)