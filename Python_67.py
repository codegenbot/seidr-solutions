def fruit_distribution(s):
    num_apples = int(re.search(r'\d+', s).group())
    num_oranges = int(re.search(r'\d+', s).group())
    return num_apples, num_oranges