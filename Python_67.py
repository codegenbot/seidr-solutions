
def fruit_distribution(s):
    apple_count = int(re.search(r"\d+", s).group())
    orange_count = int(re.search(r"\d+", s).group())
    return apple_count + orange_count
