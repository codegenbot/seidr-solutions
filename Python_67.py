def fruit_distribution(s, n):
    s = s.lower()
    start = s.find("and")
    apple_num = int("".join(filter(str.isdigit, s[:start].replace(" apples", ""))))
    return n - apple_num - 1