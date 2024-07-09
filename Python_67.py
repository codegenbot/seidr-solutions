def fruit_distribution(s, n):
    s = s.lower()
    num_apples = s.count('apples')
    num_oranges = int("".join(filter(str.isdigit, s)).lstrip('0') or 0)
    return n - (num_apples + num_oranges)