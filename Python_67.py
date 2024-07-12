def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    quantity_str = s.split()[2].split(" ")[0]
    if quantity_str.isdigit():
        return n - int(quantity_str)
    else:
        return n