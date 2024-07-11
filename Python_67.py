def fruit_distribution(s, n):
    s = s.lower()
    n = int(n)
    nums = list(map(int, filter(str.isdigit, s.split()[:-2])))
    if len(nums) > 0:
        apples = nums[1]
    else:
        apples = 0
    oranges = n - apples
    return oranges