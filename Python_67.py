
def fruit_distribution(s, n):
    apple_count = s.count("apples")
    orange_count = s.count("oranges")
    mango_count = n - (apple_count + orange_count)
    return mango_count