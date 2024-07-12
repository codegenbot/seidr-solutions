def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    total = 0
    for part in s.split():
        if part.isdigit() or (part == 'and' and total % int(n) == 0):
            total += 1
    return -(-total // n)