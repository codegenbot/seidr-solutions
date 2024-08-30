def find_pair(n, nums):
    seen = {}
    for num in nums:
        if num * 2 - n in seen:
            return str(num) + "\n" + str(num * 2 - n)
        seen[num] = True