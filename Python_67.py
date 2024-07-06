```
def fruit_distribution(s, n):
    s = s.lower()
    apple_count = s.count(" apples")
    orange_count = s.count(" oranges")
    n -= int("".join(filter(str.isdigit, s)).replace(" ", ""))
    return n - apple_count - orange_count