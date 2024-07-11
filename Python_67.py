def fruit_distribution(s, n):
    s = s.replace(" apples", " apple").replace(" oranges", " orange")
    total = int(s.split(" ")[0].replace(" ", "")) - 1
    return n - total