def fruit_distribution(s, n):
    words = s.split()
    n_apples = 0
    for word in words:
        if "apples" in word:
            n_apples += int(''.join(filter(str.isdigit, [word for word in words if "apples" in word])) or 0)
    return n - n_apples