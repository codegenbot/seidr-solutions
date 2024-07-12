def fruit_distribution(s, n):
    s = s.replace("apples", "0").replace("oranges", "0")
    total = 0
    for part in s.split():
        if not part.isdigit():
            total += int(part)
    return (-(-total // n))