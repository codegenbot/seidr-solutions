def fruit_distribution(s, n):
    apple_count = int(s.split(" ")[0])
    orange_count = int(s.split(" ")[2])
    mango_count = apple_count + orange_count
    return mango_count