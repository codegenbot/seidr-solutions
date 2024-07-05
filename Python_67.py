def fruit_distribution(s, n):
    apple_count = int(s.split("and")[0].strip().split()[-1])
    orange_count = int(s.split("and")[1].strip().split()[-1])
    mango_count = n - (apple_count + orange_count)
    return mango_count