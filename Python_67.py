def fruit_distribution(s):
    apples = int(re.search(r'\d+', s).group())
    oranges = int(re.search(r'\d+', s).group())
    return apples + oranges