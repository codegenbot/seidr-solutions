def find_pair(n, nums):
    hashmap = {}
    for num in nums:
        if -num in hashmap:
            return str(num) + "\n" + str(-num)
        else:
            hashmap[num] = 1
    return "No pair found"


n = int(input())
nums = [int(x) for x in input().split()]
print(find_pair(n, nums))