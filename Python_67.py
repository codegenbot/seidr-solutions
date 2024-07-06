def fruit_distribution(s, n):
    s = s.replace("apples", "apple").replace("oranges", "orange")
    quantities = [int(i) for i in s.split() if i.isdigit()]
    return n - min(quantities) - max(quantities)