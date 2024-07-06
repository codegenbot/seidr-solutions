def fruit_distribution(s):
    apple_count = s.count('apple')
    orange_count = s.count('orange')

    mango_count = len(s) - (apple_count + orange_count)

    return mango_count if mango_count > 0 else 0