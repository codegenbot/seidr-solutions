
def fruit_distribution(s,n):
    apple_count = int(s.split("apples")[0])
    orange_count = int(s.split("oranges")[0])
    mango_count = n - (apple_count + orange_count)
    return mango_count