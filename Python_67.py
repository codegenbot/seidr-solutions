def fruit_distribution(s, n):
    s = s.replace("apples and", "apples ").replace("oranges", "oranges ")
    nums = list(map(int, [x for x in s.split() if x.isdigit()]))
    return n - nums[0] - nums[1]