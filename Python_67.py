def fruit_distribution(s, n):
    s = s.split()
    n_apples = int("".join(filter(str.isdigit, [i for i in s if "apples" in i])))
    n_oranges = int("".join(filter(str.isdigit, [i for i in s if "oranges" in i])))
    return n - n_apples - n_oranges