def fruit_distribution(s, n):
    # Parse the input string to extract the number of apples, oranges, and mangoes
    s = s.split("and")
    apple_count = int(re.search("\d+", s[0]).group())
    orange_count = int(re.search("\d+", s[1]).group())
    mango_count = n - (apple_count + orange_count)

    return mango_count