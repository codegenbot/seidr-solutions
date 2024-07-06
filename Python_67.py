def fruit_distribution(s, n):
    s = s.replace("apples and ", "")
    s = s.replace(" oranges", "")
    total_fruits = int(s)
    n -= total_fruits
    return n