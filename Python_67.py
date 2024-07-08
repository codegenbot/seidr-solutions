def fruit_distribution(s, n):
    s = s.replace("apples and ", "")
    apple_count = int(s.split()[0].replace("apples ", ""))
    return n - apple_count