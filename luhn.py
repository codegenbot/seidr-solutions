n = int(input())
nums = list(map(int, input().split()))

total = 0
for i in range(n):
    if i % 2 == 1:
        doubled = nums[i] * 2
        total += doubled if doubled <= 9 else doubled - 9
    else:
        total += nums[i]

print(total)