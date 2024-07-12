def fruit_distribution(s,n):
    s = s.lower()
    nums = [int(x) for x in re.findall('\d+',s)]
    return n - nums[0] - nums[1]