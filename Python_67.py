def fruit_distribution(s,n):
    import re
    s = s.split()
    apple_count_str = next((s for s in s if 'apples' in s), None)
    if apple_count_str is not None:
        apples = int(re.search(r'\d+', apple_count_str).group())
    else:
        apples = 0
    orange_count_str = next((s for s in s if 'oranges' in s), None)
    if orange_count_str is not None:
        oranges = int(re.search(r'\d+', orange_count_str).group())
    else:
        oranges = 0
    return n - apples - oranges