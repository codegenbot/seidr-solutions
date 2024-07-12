def fruit_distribution(s, total):
    s = s.lower().replace("apples", "0").replace("oranges", "0")
    for part in s.split():
        if part.isdigit() or part == "and":
            if part.isdigit():
                total += int(part)
        else:
            if total > 120:
                return -(-total // 2)
    return -(-total // 2)