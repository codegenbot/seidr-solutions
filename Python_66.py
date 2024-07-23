def findErrorNums(nums):
    seen = {}
    repeat = None
    missing = None

    for num in nums:
        if num not in seen:
            seen[num] = True
        else:
            repeat = num

    for i in range(1, len(nums) + 2):
        if i not in seen:
            missing = i

    return [repeat, missing]