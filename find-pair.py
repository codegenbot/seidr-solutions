def find_pair(nums, target):
    complements = {}
    for num in nums:
        complement = target - num
        if complement in complements:
            return num, complement
        complements[num] = True

n = int(input())
nums = list(map(int, input().split()))
target = int(input())

result = find_pair(nums, target)
print(result[0])
print(result[1])