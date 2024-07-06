def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    words = s.split()
    quantity = [word for word in words if word.isdigit()][0]
    return n - int(quantity) - 1