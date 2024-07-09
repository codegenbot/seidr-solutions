def fruit_distribution(s, n):
    s = s.lower()
    num_apples = sum(int(digit) for digit in "".join(filter(str.isdigit, s)))
    return n - num_apples