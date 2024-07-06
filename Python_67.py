def fruit_distribution(s):
    # use regular expressions to extract numbers from the input string
    apples = int(re.search(r'\d+', s).group())
    oranges = int(re.search(r'\d+', s).group())
    return apples + oranges