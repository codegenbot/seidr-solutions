n = int(input())
nums = []
for _ in range(n):
    num = int(input())
    new_num = max(num // 3 - 2, 0)
    nums.append(new_num)
print(sum(nums))