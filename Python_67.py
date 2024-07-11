def fruit_distribution(s, n):
    s = s.lower()
    num_apples = int("".join(filter(str.isdigit, s.split(" ")[0].split(" ")[-1])))
    return n - num_apples