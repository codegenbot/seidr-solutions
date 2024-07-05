def fruit_distribution(s, n):
    apple_count, orange_count = (
        s.split("and")[0].strip().split()[-1],
        s.split("and")[1].strip().split()[-1],
    )
    apple_count = int(apple_count)
    orange_count = int(orange_count)
    mango_count = n - apple_count - orange_count
    return mango_count