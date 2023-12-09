def fruit_distribution(s, n):
    # Use regular expression to extract numbers from input string
    nums = re.findall(r'\d+', s)
    apples, oranges = map(int, nums)
    return n - apples - oranges
