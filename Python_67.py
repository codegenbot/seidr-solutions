
def fruit_distribution(s, n):
    apple_count = re.search("\d+", s.split("and")[0])
    orange_count = re.search("\d+", s.split("and")[1])
    mango_count = n - int(apple_count) - int(orange_count)
    return mango_count