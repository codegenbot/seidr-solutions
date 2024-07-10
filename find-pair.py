n = int(input())
nums = list(map(int, input().split()))
target = int(input())

seen = {}
for num in nums:
    complement = target - num
    if complement in seen:
        print(complement)
        print(num)
        break
    seen[num] = True