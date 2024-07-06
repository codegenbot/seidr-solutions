def fruit_distribution(s, n):
    s = s.lower()
    n = int(n)
    s = s.replace(" apples and ", " ")
    s = s.replace(" oranges", "")
    s = s.replace(" apple", "0")
    s = s.replace(" orange", "0")
    return n - int(s.split()[1]) - int(s.split()[3])