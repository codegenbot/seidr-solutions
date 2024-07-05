def fruit_distribution(s, n):
    apple_count, orange_count = s.split("and")[0].strip().split()[-1], s.split("and")[1].strip().split()[-1]
    mango_count = n - int(apple_count.replace("apples", "")) - int(orange_count.replace("oranges", ""))
    return mango_count